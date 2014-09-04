/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/powerball/rpi_robotics_work/schunk_workspace/src/cob_common/cob_srvs/srv/SetFloat.srv
 *
 */


#ifndef COB_SRVS_MESSAGE_SETFLOAT_H
#define COB_SRVS_MESSAGE_SETFLOAT_H

#include <ros/service_traits.h>


#include <cob_srvs/SetFloatRequest.h>
#include <cob_srvs/SetFloatResponse.h>


namespace cob_srvs
{

struct SetFloat
{

typedef SetFloatRequest Request;
typedef SetFloatResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetFloat
} // namespace cob_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_srvs::SetFloat > {
  static const char* value()
  {
    return "6d377670bf14df6212d27844842dc020";
  }

  static const char* value(const ::cob_srvs::SetFloat&) { return value(); }
};

template<>
struct DataType< ::cob_srvs::SetFloat > {
  static const char* value()
  {
    return "cob_srvs/SetFloat";
  }

  static const char* value(const ::cob_srvs::SetFloat&) { return value(); }
};


// service_traits::MD5Sum< ::cob_srvs::SetFloatRequest> should match 
// service_traits::MD5Sum< ::cob_srvs::SetFloat > 
template<>
struct MD5Sum< ::cob_srvs::SetFloatRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_srvs::SetFloat >::value();
  }
  static const char* value(const ::cob_srvs::SetFloatRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_srvs::SetFloatRequest> should match 
// service_traits::DataType< ::cob_srvs::SetFloat > 
template<>
struct DataType< ::cob_srvs::SetFloatRequest>
{
  static const char* value()
  {
    return DataType< ::cob_srvs::SetFloat >::value();
  }
  static const char* value(const ::cob_srvs::SetFloatRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_srvs::SetFloatResponse> should match 
// service_traits::MD5Sum< ::cob_srvs::SetFloat > 
template<>
struct MD5Sum< ::cob_srvs::SetFloatResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_srvs::SetFloat >::value();
  }
  static const char* value(const ::cob_srvs::SetFloatResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_srvs::SetFloatResponse> should match 
// service_traits::DataType< ::cob_srvs::SetFloat > 
template<>
struct DataType< ::cob_srvs::SetFloatResponse>
{
  static const char* value()
  {
    return DataType< ::cob_srvs::SetFloat >::value();
  }
  static const char* value(const ::cob_srvs::SetFloatResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_SRVS_MESSAGE_SETFLOAT_H
