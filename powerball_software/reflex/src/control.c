/* -*- mode: C; c-basic-offset: 4 -*- */
/* ex: set shiftwidth=4 tabstop=4 expandtab: */
/*
 * Copyright (c) 2010, Georgia Tech Research Corporation
 * All rights reserved.
 *
 * Author(s): Neil T. Dantam <ntd@gatech.edu>
 * Georgia Tech Humanoid Robotics Lab
 * Under Direction of Prof. Mike Stilman <mstilman@cc.gatech.edu>
 *
 *
 * This file is provided under the following "BSD-style" License:
 *
 *
 *   Redistribution and use in source and binary forms, with or
 *   without modification, are permitted provided that the following
 *   conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *   CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *   INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *   MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *   DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 *   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 *   USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 *   AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *   ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *   POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <amino.h>
#include "reflex.h"

const char* rfx_status_string(rfx_status_t i) {
    switch(i) {
    case RFX_OK: return "OK";
    case RFX_INVAL: return "INVAL";
    case RFX_LIMIT_POSITION: return "LIMIT_POSITION";
    case RFX_LIMIT_POSITION_ERROR: return "LIMIT_POSITION_ERROR";
    case RFX_LIMIT_FORCE: return "LIMIT_FORCE";
    case RFX_LIMIT_MOMENT: return "LIMIT_MOMENT";
    case RFX_LIMIT_FORCE_ERROR: return "LIMIT_FORCE_ERROR";
    case RFX_LIMIT_MOMENT_ERROR: return "LIMIT_MOMENT_ERROR";
    case RFX_LIMIT_CONFIGURATION: return "LIMIT_CONFIGURATION";
    case RFX_LIMIT_CONFIGURATION_ERROR: return "LIMIT_CONFIGURATION_ERROR";
    }
    return "unknown";
}


void rfx_ctrlx_state_init( struct rfx_ctrlx_state *x, size_t n ) {
    x->q  = AA_NEW0_AR( double, n );
    x->dq = AA_NEW0_AR( double, n );
    x->S  = AA_NEW0_AR( double, 8 );
    x->dx = AA_NEW0_AR( double, 6 );
    x->F  = AA_NEW0_AR( double, 6 );
    AA_MEM_CPY( x->S, aa_tf_duqu_ident, 8 );
}


void rfx_ctrlx_state_init_region( struct rfx_ctrlx_state *x, aa_mem_region_t *reg, size_t n ) {
    x->q  = AA_MEM_REGION_NEW_N( reg, double, n );
    AA_MEM_SET( x->q, 0, n );
    x->dq = AA_MEM_REGION_NEW_N( reg, double, n );
    AA_MEM_SET( x->dq, 0, n );
    x->S  = AA_MEM_REGION_NEW_N( reg, double, 8 );
    AA_MEM_CPY( x->S, aa_tf_duqu_ident, 8 );
    x->dx = AA_MEM_REGION_NEW_N( reg, double, 6 );
    AA_MEM_SET( x->dx, 0, 6 );
    x->F  = AA_MEM_REGION_NEW_N( reg, double, 6 );
    AA_MEM_SET( x->F, 0, 6 );
}

void rfx_ctrl_ws_init( rfx_ctrl_ws_t *g, size_t n ) {
    memset( g, 0, sizeof(*g) );
    g->n_q = n;

    rfx_ctrlx_state_init( &g->ref, n );
    rfx_ctrlx_state_init( &g->act, n );

    g->J = AA_NEW0_AR( double, n*6 );

    g->q_min = AA_NEW0_AR( double, n );
    g->q_max = AA_NEW0_AR( double, n );
}

void rfx_ctrlx_state_destroy( struct rfx_ctrlx_state *x ) {
    free(x->q);
    free(x->dq);
    free(x->S);
    free(x->dx);
    free(x->F);
}

void rfx_ctrl_ws_destroy( rfx_ctrl_ws_t *g ) {
    rfx_ctrlx_state_destroy(&g->ref);
    rfx_ctrlx_state_destroy(&g->act);

    free(g->J);
    free(g->q_min);
    free(g->q_max);
}

AA_API void rfx_ctrl_ws_lin_k_init( rfx_ctrl_ws_lin_k_t *k, size_t n_q  ) {
    k->n_q = n_q;
    k->q = AA_NEW0_AR( double, k->n_q );
}
AA_API void rfx_ctrl_ws_lin_k_destroy( rfx_ctrl_ws_lin_k_t *k ) {
    free(k->q);
}

// FIXME: check directions for all limits
// FIXME: add hard limits
static rfx_status_t check_limit( const rfx_ctrl_t *g, const double dx[3] ) {
    // F_max
    if( (g->F_max > 0) /* has limit */ &&
        (aa_la_dot( 3, g->act.F, g->act.F ) > g->F_max*g->F_max) /* magnitude check */ &&
        0 < aa_la_dot( 3, g->act.F, dx ) /*direction check*/ )
    {
        return RFX_LIMIT_FORCE;
    }
    // M_max
    if( (g->M_max > 0) &&
        (aa_la_dot( 3, g->act.F+3, g->act.F+3 ) > g->M_max*g->M_max) )
        return RFX_LIMIT_MOMENT;
    // q_min, q_max
    for( size_t i = 0; i < g->n_q; i++ ) {
        if( (g->act.q[i] < g->q_min[i]) || (g->act.q[i] > g->q_max[i] ) )
            return RFX_LIMIT_CONFIGURATION;
    }
    // x_min, x_max
    double x[3], x_r[3];
    aa_tf_duqu_trans( g->act.S, x );
    aa_tf_duqu_trans( g->ref.S, x_r );
    for( size_t i = 0; i < 3; i++ ) {
        if( (x[i] < g->x_min[i]) || (x[i] > g->x_max[i] ) )
            return RFX_LIMIT_POSITION;
    }
    // e_q_max
    if( (g->e_q_max > 0) &&
        ( aa_la_ssd(g->n_q, g->act.q, g->ref.q) > g->e_q_max * g->e_q_max ) )
        return RFX_LIMIT_CONFIGURATION_ERROR;
    // e_x_max
    if( (g->e_x_max > 0) &&
        ( aa_la_ssd(3, x, x_r) > g->e_x_max * g->e_x_max ) )
        return RFX_LIMIT_POSITION_ERROR;
    // e_F_max
    if( (g->e_F_max > 0) &&
        ( aa_la_ssd(3, g->act.F, g->ref.F) > g->e_F_max * g->e_F_max ) )
        return RFX_LIMIT_FORCE_ERROR;;
    // e_M_max
    if( (g->e_M_max > 0) &&
        ( aa_la_ssd(3, g->act.F+3, g->ref.F+3) > g->e_M_max * g->e_M_max ) )
        return RFX_LIMIT_MOMENT_ERROR;

    return RFX_OK;
}

/*
 * u = J^* * (  dx_r - k_p * (x - x_r) -  k_f * (F - F_r) )
 */
rfx_status_t rfx_ctrl_ws_lin_vfwd( const rfx_ctrl_ws_t *ws, const rfx_ctrl_ws_lin_k_t *k, double *u ) {
    double dx_u[6], x_e[6];
    double dq_r[ws->n_q];

    assert( ws->n_q == k->n_q );


    // find position error
    /* aa_la_vsub( 3, ws->x, ws->x_r, x_e ); */

    /* // find orientation error */
    /* { */
    /*     double r_e[4], rln[4]; */
    /*     aa_tf_qmulc(ws->r, ws->r_r, r_e); */
    /*     // this is really the quaternion logarithm! */
    /*     aa_tf_qminimize(r_e); */
    /*     aa_tf_quat2rotvec( r_e, x_e+3 );    // axis-angle conversion */
    /* } */

    // relative dual quaternion -> twist -> velocity
    {
        double twist[8], de[8];
        aa_tf_duqu_mulc( ws->act.S, ws->ref.S, de );  // de = d*conj(d_r)
        aa_tf_duqu_minimize(de);
        aa_tf_duqu_ln( de, twist );     // twist = log( de )
        aa_tf_duqu_twist2vel( ws->act.S, twist, x_e );
    }

    //printf("xe: "); aa_dump_vec(stdout, x_e, 6);
    //printf("xed: "); aa_dump_vec(stdout, x_e_d, 6);
    //if( aa_la_ssd(6, x_e_s, x_e_d) > 1e-1 ) {
    //    abort();
    //}

    // find workspace velocity
    // dx_u = dx_r - k_p * x_e -  k_f * (F - F_r)
    for(size_t i = 0; i < 6; i ++ ) {
        dx_u[i] = ws->ref.dx[i]
            - k->p[i] * x_e[i]
            - k->f[i] * (ws->act.F[i] - ws->ref.F[i]);
    }


    // check force limits
    {
        rfx_status_t r = check_limit( ws, dx_u );
        if( RFX_OK != r ) {
            AA_MEM_ZERO( u, ws->n_q );
            return r;
        }
    }


    // jointspace reference velocity
    for( size_t i = 0; i < ws->n_q; i ++ ) {
        dq_r[i] = -k->q[i] * (ws->act.q[i] - ws->ref.q[i]);// + ws->dq_r[i];
    }

    // find damped inverse
    double J_star[6*ws->n_q];  // q is probally small, assume this fits on the stack

    // Compute a damped pseudo inverse
    if( k->s2min > 0 ) {
        aa_la_dzdpinv( 6, ws->n_q, k->s2min, ws->J, J_star );
    } else  {
        aa_la_dpinv( 6, ws->n_q, k->dls, ws->J, J_star );
    }

    // damped least squares with null-space projection
    aa_la_xlsnp( 6, ws->n_q, ws->J, J_star, dx_u, dq_r, u );

    /* aa_la_dlsnp( 6, ws->n_q, k->dls, ws->J, dx_u, dq_r, u ); */

    return RFX_OK;
}

rfx_status_t rfx_ctrl_ws_sdx( rfx_ctrl_ws_t *ws, double dt ) {

    // translation
    /* double r1_split[4], v1_split[3]; */
    /* AA_MEM_CPY( v1_split, ws->x_r, 3 ); */
    /* aa_la_axpy( 3, dt, ws->dx_r, v1_split ); */
    /* // rotation */
    /* aa_tf_qsvel( ws->r_r, ws->dx_r+3, dt, r1_split ); */
    /* aa_tf_qnormalize( r1_split ); */

    double S1[8];
    aa_tf_duqu_svel( ws->ref.S, ws->ref.dx, dt, S1 );
    AA_MEM_CPY( ws->ref.S, S1, 8 );

    /* printf("old:  %f\t%f\t%f\t%f\t|\t%f\t%f\t%f\n", */
    /*        ws->r_r[0], ws->r_r[1], ws->r_r[2], ws->r_r[3], */
    /*        ws->x_r[0], ws->x_r[1], ws->x_r[2] ); */
    /* printf("splt: %f\t%f\t%f\t%f\t|\t%f\t%f\t%f\n", */
    /*        r1_split[0], r1_split[1], r1_split[2], r1_split[3], */
    /*        v1_split[0], v1_split[1], v1_split[2] ); */
    /* printf("dual: %f\t%f\t%f\t%f\t|\t%f\t%f\t%f\n", */
    /*        S1[0], S1[1], S1[2], S1[3], */
    /*        v1_duqu[0], v1_duqu[1], v1_duqu[2] ); */

    return RFX_OK;
}


rfx_status_t rfx_ctrlq_lin_vfwd( const rfx_ctrl_t *g, const rfx_ctrlq_lin_k_t *k,  double *u ) {
    for( size_t i = 0; i < g->n_q; i ++ ) {
        u[i] = g->ref.dq[i]
            - k->p[i] * (g->act.q[i] - g->ref.q[i]);
    }
    return RFX_OK;
}


rfx_ctrlx_lin_t *rfx_ctrlx_alloc( aa_mem_region_t *reg, size_t n_q, rfx_kin_fun kin_fun, void *kin_fun_cx ) {
    rfx_ctrlx_lin_t *p = AA_MEM_REGION_NEW( reg, rfx_ctrlx_lin_t );
    p->ctrl = AA_MEM_REGION_NEW( reg, rfx_ctrl_t );
    p->k = AA_MEM_REGION_NEW( reg, rfx_ctrl_ws_lin_k_t  );

    memset( p->ctrl, 0, sizeof(*p->ctrl) );
    memset( p->k, 0, sizeof(*p->k) );

    p->ctrl->n_q = n_q;
    p->kin_fun = kin_fun;
    p->kin_fun_cx = kin_fun_cx;

    rfx_ctrlx_state_init_region( &p->ctrl->act, reg, n_q );
    rfx_ctrlx_state_init_region( &p->ctrl->ref, reg, n_q );

    p->ctrl->q_min = AA_MEM_REGION_NEW_N( reg, double, n_q );
    p->ctrl->q_max = AA_MEM_REGION_NEW_N( reg, double, n_q );

    AA_MEM_SET( p->ctrl->q_min, 0, n_q );
    AA_MEM_SET( p->ctrl->q_max, 0, n_q );

    p->ctrl->J = AA_MEM_REGION_NEW_N( reg, double, n_q*6 );

    p->k->n_q = n_q;
    p->k->q = AA_MEM_REGION_NEW_N( reg, double, n_q );
    AA_MEM_SET( p->k->q, 0, n_q );


    return p;
}

AA_API rfx_status_t rfx_ctrlx_lin_vfwd( const rfx_ctrlx_lin_t *ctrl, const double *q,
                                        double *u ) {
    AA_MEM_CPY( ctrl->ctrl->act.q, q, ctrl->ctrl->n_q );

    double r[4], x[3];
    ctrl->kin_fun( ctrl->kin_fun_cx, q, x, r, ctrl->ctrl->J );
    aa_tf_qv2duqu( r, x, ctrl->ctrl->act.S );
    return rfx_ctrl_ws_lin_vfwd( ctrl->ctrl, ctrl->k, u );
}

int rfx_ctrlx_fun_lin_vfwd ( void *cx,
                             const double *q_a, const double *dq_a,
                             const double *E_r, const double *dx_r,
                             double *dq_r )
{
    const rfx_ctrlx_lin_t *ctrlx = (const rfx_ctrlx_lin_t *)cx;
    // actual
    rfx_ctrl_t *ctrl = ctrlx->ctrl;
    size_t nq = ctrl->n_q;
    AA_MEM_CPY(ctrl->act.q, q_a, nq);
    AA_MEM_CPY(ctrl->act.dq, dq_a, nq);
    double r[4], x[3];
    ctrlx->kin_fun( ctrlx->kin_fun_cx, q_a, x, r, ctrl->J );
    aa_tf_qv2duqu( r, x, ctrl->act.S );

    // reference
    aa_tf_qutr2duqu( E_r, ctrl->ref.S );
    AA_MEM_CPY(ctrl->ref.dx, dx_r, 6 );

    // result
    return rfx_ctrl_ws_lin_vfwd( ctrlx->ctrl, ctrlx->k, dq_r );
}
