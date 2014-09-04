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
 * Auto-generated by gensrv_cpp from file /home/powerball/rpi_robotics_work/schunk_workspace/src/cob_driver/cob_camera_sensors/srv/GetTOFImages.srv
 *
 */


#ifndef COB_CAMERA_SENSORS_MESSAGE_GETTOFIMAGES_H
#define COB_CAMERA_SENSORS_MESSAGE_GETTOFIMAGES_H

#include <ros/service_traits.h>


#include <cob_camera_sensors/GetTOFImagesRequest.h>
#include <cob_camera_sensors/GetTOFImagesResponse.h>


namespace cob_camera_sensors
{

struct GetTOFImages
{

typedef GetTOFImagesRequest Request;
typedef GetTOFImagesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetTOFImages
} // namespace cob_camera_sensors


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_camera_sensors::GetTOFImages > {
  static const char* value()
  {
    return "245ce4e6dd0ec61a5c674c8191a91877";
  }

  static const char* value(const ::cob_camera_sensors::GetTOFImages&) { return value(); }
};

template<>
struct DataType< ::cob_camera_sensors::GetTOFImages > {
  static const char* value()
  {
    return "cob_camera_sensors/GetTOFImages";
  }

  static const char* value(const ::cob_camera_sensors::GetTOFImages&) { return value(); }
};


// service_traits::MD5Sum< ::cob_camera_sensors::GetTOFImagesRequest> should match 
// service_traits::MD5Sum< ::cob_camera_sensors::GetTOFImages > 
template<>
struct MD5Sum< ::cob_camera_sensors::GetTOFImagesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_camera_sensors::GetTOFImages >::value();
  }
  static const char* value(const ::cob_camera_sensors::GetTOFImagesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_camera_sensors::GetTOFImagesRequest> should match 
// service_traits::DataType< ::cob_camera_sensors::GetTOFImages > 
template<>
struct DataType< ::cob_camera_sensors::GetTOFImagesRequest>
{
  static const char* value()
  {
    return DataType< ::cob_camera_sensors::GetTOFImages >::value();
  }
  static const char* value(const ::cob_camera_sensors::GetTOFImagesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_camera_sensors::GetTOFImagesResponse> should match 
// service_traits::MD5Sum< ::cob_camera_sensors::GetTOFImages > 
template<>
struct MD5Sum< ::cob_camera_sensors::GetTOFImagesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_camera_sensors::GetTOFImages >::value();
  }
  static const char* value(const ::cob_camera_sensors::GetTOFImagesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_camera_sensors::GetTOFImagesResponse> should match 
// service_traits::DataType< ::cob_camera_sensors::GetTOFImages > 
template<>
struct DataType< ::cob_camera_sensors::GetTOFImagesResponse>
{
  static const char* value()
  {
    return DataType< ::cob_camera_sensors::GetTOFImages >::value();
  }
  static const char* value(const ::cob_camera_sensors::GetTOFImagesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_CAMERA_SENSORS_MESSAGE_GETTOFIMAGES_H
