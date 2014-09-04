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
 * Auto-generated by genmsg_cpp from file /home/powerball/rpi_robotics_work/schunk_workspace/src/cob_common/cob_srvs/srv/GetPoseStampedTransformed.srv
 *
 */


#ifndef COB_SRVS_MESSAGE_GETPOSESTAMPEDTRANSFORMEDREQUEST_H
#define COB_SRVS_MESSAGE_GETPOSESTAMPEDTRANSFORMEDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Quaternion.h>

namespace cob_srvs
{
template <class ContainerAllocator>
struct GetPoseStampedTransformedRequest_
{
  typedef GetPoseStampedTransformedRequest_<ContainerAllocator> Type;

  GetPoseStampedTransformedRequest_()
    : target()
    , origin()
    , orientation_override()
    , root_name()
    , tip_name()  {
    }
  GetPoseStampedTransformedRequest_(const ContainerAllocator& _alloc)
    : target(_alloc)
    , origin(_alloc)
    , orientation_override(_alloc)
    , root_name(_alloc)
    , tip_name(_alloc)  {
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _target_type;
  _target_type target;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _origin_type;
  _origin_type origin;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_override_type;
  _orientation_override_type orientation_override;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _root_name_type;
  _root_name_type root_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tip_name_type;
  _tip_name_type tip_name;




  typedef boost::shared_ptr< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct GetPoseStampedTransformedRequest_

typedef ::cob_srvs::GetPoseStampedTransformedRequest_<std::allocator<void> > GetPoseStampedTransformedRequest;

typedef boost::shared_ptr< ::cob_srvs::GetPoseStampedTransformedRequest > GetPoseStampedTransformedRequestPtr;
typedef boost::shared_ptr< ::cob_srvs::GetPoseStampedTransformedRequest const> GetPoseStampedTransformedRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_srvs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/hydro/share/trajectory_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7f6050054c7441aa5c8e1b131c78c448";
  }

  static const char* value(const ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7f6050054c7441aaULL;
  static const uint64_t static_value2 = 0x5c8e1b131c78c448ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_srvs/GetPoseStampedTransformedRequest";
  }

  static const char* value(const ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PoseStamped target\n\
geometry_msgs/PoseStamped origin\n\
geometry_msgs/Quaternion  orientation_override\n\
string root_name\n\
string tip_name\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target);
      stream.next(m.origin);
      stream.next(m.orientation_override);
      stream.next(m.root_name);
      stream.next(m.tip_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetPoseStampedTransformedRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_srvs::GetPoseStampedTransformedRequest_<ContainerAllocator>& v)
  {
    s << indent << "target: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.target);
    s << indent << "origin: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.origin);
    s << indent << "orientation_override: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation_override);
    s << indent << "root_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.root_name);
    s << indent << "tip_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tip_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_SRVS_MESSAGE_GETPOSESTAMPEDTRANSFORMEDREQUEST_H
