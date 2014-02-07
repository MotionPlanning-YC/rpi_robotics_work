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


/*
 *  S_t = S_u * S_r
 *  S_u = S_t * conj(S_r)
 *  dS_u = dS_t * conj(S_r), assuming S_r is constant
 */

void rfx_kin_duqu_reldiff( const double S_u[8], const double S_r[8], const double dS_t[8],
                           double S_t[8], double dS_u[8] ) {
    aa_tf_duqu_mul( S_u, S_r, S_t );
    aa_tf_duqu_mulc( dS_t, S_r, dS_u );
}

void rfx_kin_duqu_relvel( const double S_u[8], const double S_r[8], const double w_t[6],
                          double S_t[8], double w_u[6] ) {
    double dS_t[8], dS_u[8];

    aa_tf_duqu_mul( S_u, S_r, S_t );
    aa_tf_duqu_vel2diff( S_t, w_t, dS_t );
    aa_tf_duqu_mulc( dS_t, S_r, dS_u );
    rfx_kin_duqu_reldiff( S_u, S_r, dS_t, S_t, dS_u );
    aa_tf_duqu_diff2vel( S_u, dS_u, w_u );
}


struct kin_solve_cx {
    size_t n;
    struct rfx_kin_solve_opts *opts;
    rfx_kin_duqu_fun kin_fun;
    const double *S1;
    double *dq_dt;
};


void rfx_kin_2d2_fk( double l0, double l1, double q0, double q1, double *x, double *y ) {
    if( x ) *x = sin(q0)*l0 + sin(q0+q1)*l1;
    if( y ) *y = cos(q0)*l0 + cos(q0+q1)*l1;
}


void rfx_kin_duqu_werr( const double S[8], const double S_ref[8], double werr[6] ) {
    double twist[8], de[8];
    aa_tf_duqu_mulc( S, S_ref, de );  // de = d*conj(d_r)
    aa_tf_duqu_minimize(de);
    aa_tf_duqu_ln( de, twist );     // twist = log( de )
    aa_tf_duqu_twist2vel( S, twist, werr );
}


void rfx_kin_duqu_serr( const double S[8], const double S_ref[8],
                       double *theta, double *x ) {
    double S_rel[8];
    aa_tf_duqu_cmul( S, S_ref, S_rel ); // relative dual quaternion
    aa_tf_duqu_minimize(S_rel);
    //printf("srel: "); aa_dump_vec(stdout, S_rel, 8 );

    // quaternion angle
    *theta = atan2( sqrt(S_rel[0]*S_rel[0] + S_rel[1]*S_rel[1] + S_rel[2]*S_rel[2]),
                    S_rel[3] );

    // translation
    double xe[3];
    aa_tf_duqu_trans( S_rel, xe );
    *x = sqrt( xe[0]*xe[0] + xe[1]*xe[1] + xe[2]*xe[2] );
}


static void kin_solve_sys( const void *vcx,
                           double t, const double *AA_RESTRICT q,
                           double *AA_RESTRICT dq ) {
    (void) t; // time invariant
    const struct kin_solve_cx *cx = (const struct kin_solve_cx*)vcx;

    // compute kinematics
    double S[8];
    double J[6*cx->n];
    double J_star[6*cx->n];
    cx->kin_fun( NULL, q, S, J );

    // position error
    double w_e[6];
    rfx_kin_duqu_werr( S, cx->S1, w_e );
    for( size_t i = 0; i < 6; i ++ ) w_e[i] *= -cx->opts->dx_dt;

    // damped least squares
    aa_la_dzdpinv( 6, cx->n, cx->opts->s2min_dls, J, J_star );
    if( cx->opts->q_ref ) {
        // nullspace projection
        double dqnull[cx->n];
        for( size_t i = 0; i < cx->n; i ++ )  {
            dqnull[i] = - cx->dq_dt[i] * ( q[i] - cx->opts->q_ref[i] );
        }
        aa_la_xlsnp( 6, cx->n, J, J_star, w_e, dqnull, dq );
    } else {
        aa_la_mvmul(cx->n,6,J_star,w_e,dq);
    }
}


/* Levenberg Marquedt
 *
 *
 *   dq = pinv(J) * log( conj(S)*S_ref ) + (I-pinv(J)*J) dq_dt * (q - q_ref)
 *   q(k+1) = q(k) + dt(k) * dq(k)
 *
 *   dt is adjusted using an adaptive Runge-Kutta
 *   dq_dt is adjusted when dq is too small
 */
int rfx_kin_solve( size_t n, const double *q0, const double S1[8],
                   rfx_kin_duqu_fun kin_fun,
                   double *q1,
                   struct rfx_kin_solve_opts *opts ) {

    struct kin_solve_cx cx;
    cx.n = n;
    cx.opts = opts;
    cx.S1 = S1;
    cx.kin_fun = kin_fun;
    cx.dq_dt = opts->dq_dt;

    AA_MEM_CPY(q1, q0, n);

    int iters = 0;

    double k[n*6]; // adaptive runge-kutta internal derivatives
    kin_solve_sys( &cx, 0, q1, k ); // initial dx for adaptive runge-kutta
    double dt = opts->dt0; // adaptive timestep
    double dq_dt[n];
    AA_MEM_CPY( dq_dt, opts->dq_dt, n );
    cx.dq_dt = dq_dt;

    double dq_norm = opts->dq_tol;
    double theta_err = opts->theta_tol;
    double x_err = opts->x_tol;

    while( fabs(theta_err) >= opts->theta_tol ||
           fabs(x_err) >= opts->x_tol ||
           dq_norm >= opts->dq_tol )
    {
        iters++;
        dq_norm = 0;

        // integrate
        /* double dq[n]; */
        /* kin_solve_sys( &cx, 0, q1, dq ); */
        /* for( size_t i = 0; i < n; i ++ ) { */
        /*     dq_norm += dq[i] * dq[i]; */
        /*     q1[i] += dq[i]; */
        /* } */

        /* double q[n]; */
        /* aa_odestep_rk4( n, kin_solve_sys, &cx, */
        /*                 0, opts->dt0, */
        /*                 q1, q ); */
        /* for( size_t i = 0; i < n; i ++ ) { */
        /*     dq_norm += (q1[i]-q[i]) * (q1[i]-q[i]); */
        /*     q1[i] = q[i]; */
        /* } */


        // Adaptive step
        {
            double q5[n];
            double qerr;
            do {
                double q4[n];
                aa_odestep_dorpri45( n, kin_solve_sys, &cx,
                                     0, dt,
                                     q1, k, q4, q5 );
                qerr = aa_la_ssd( n, q4, q5 );
                // adapt the step size
                if( qerr > opts->dq_tol / 2) {
                    dt /= 10;
                    //printf("reducing dt: %f\n", dt);
                } else if ( qerr < opts->dq_tol / 16 ) {
                    dt *= 2;
                    //printf("increasing dt: %f\n", dt);
                }
            } while( qerr > opts->dq_tol );

            for( size_t i = 0; i < n; i ++ ) {
                dq_norm += (q1[i]-q5[i]) * (q1[i]-q5[i]);
                q1[i] = q5[i];
            }
            AA_MEM_CPY(k, k+5*n, n); // write dx to k0
        }

        //printf("q: "); aa_dump_vec(stdout, q1, n );

        // check error
        double S[8];
        kin_fun( NULL, q1, S, NULL );
        rfx_kin_duqu_serr( S, S1, &theta_err, &x_err );
        //printf("err: theta: %f, x: %f, dqn: %f\n", theta_err, x_err, dq_norm);

        // adapt the nullspace gain
        if( dq_norm < opts->dq_tol &&
            (theta_err > opts->theta_tol ||
             x_err > opts->x_tol ) )
        {
            for( size_t i = 0; i < n; i ++  ) cx.dq_dt[i] /= 2;
            //printf("halving nullspace gain: %f\n", cx.dq_dt);
        }
    };

    //printf(" iter: %d\n", iters );
    //printf(" norm: %f\n", aa_la_dot( n, q1, q1 ) );
    return 0;
}

/* void rfx_kin_duqu_revchain( size_t n, const double T0[8], const double *TT_rel, const double Te_rel[8], */
/*                             const double *axis, */
/*                             double * TT_abs,  double Te_abs[8], double *J, size_t ldJ ) */
/* { */
/*       printf("J: %x\n", J); */
/*       double pe[3]; */
/*       rfx_kin_duqu_chain( n, T0, TT_rel, TT_abs ); */
/*       aa_tf_duqu_mul( TT_abs + 8*(n-1), Te_rel, Te_abs ); */
/*       aa_tf_duqu_trans( Te_abs, pe ); */
/*       rfx_kin_duqu_jac_rev( n, TT_abs, axis, pe, J, ldJ ); */
/* } */
