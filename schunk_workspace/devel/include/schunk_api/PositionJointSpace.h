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
 * Auto-generated by genmsg_cpp from file /home/powerball/rpi_robotics_work/schunk_workspace/src/schunk_api/msg/PositionJointSpace.msg
 *
 */


#ifndef SCHUNK_API_MESSAGE_POSITIONJOINTSPACE_H
#define SCHUNK_API_MESSAGE_POSITIONJOINTSPACE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace schunk_api
{
template <class ContainerAllocator>
struct PositionJointSpace_
{
  typedef PositionJointSpace_<ContainerAllocator> Type;

  PositionJointSpace_()
    : joint1Position(0.0)
    , joint2Position(0.0)
    , joint3Position(0.0)
    , joint4Position(0.0)
    , joint5Position(0.0)
    , joint6Position(0.0)  {
    }
  PositionJointSpace_(const ContainerAllocator& _alloc)
    : joint1Position(0.0)
    , joint2Position(0.0)
    , joint3Position(0.0)
    , joint4Position(0.0)
    , joint5Position(0.0)
    , joint6Position(0.0)  {
    }



   typedef double _joint1Position_type;
  _joint1Position_type joint1Position;

   typedef double _joint2Position_type;
  _joint2Position_type joint2Position;

   typedef double _joint3Position_type;
  _joint3Position_type joint3Position;

   typedef double _joint4Position_type;
  _joint4Position_type joint4Position;

   typedef double _joint5Position_type;
  _joint5Position_type joint5Position;

   typedef double _joint6Position_type;
  _joint6Position_type joint6Position;




  typedef boost::shared_ptr< ::schunk_api::PositionJointSpace_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::schunk_api::PositionJointSpace_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct PositionJointSpace_

typedef ::schunk_api::PositionJointSpace_<std::allocator<void> > PositionJointSpace;

typedef boost::shared_ptr< ::schunk_api::PositionJointSpace > PositionJointSpacePtr;
typedef boost::shared_ptr< ::schunk_api::PositionJointSpace const> PositionJointSpaceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::schunk_api::PositionJointSpace_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::schunk_api::PositionJointSpace_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace schunk_api

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'schunk_api': ['/home/powerball/rpi_robotics_work/schunk_workspace/src/schunk_api/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::schunk_api::PositionJointSpace_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::schunk_api::PositionJointSpace_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::schunk_api::PositionJointSpace_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::schunk_api::PositionJointSpace_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::schunk_api::PositionJointSpace_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::schunk_api::PositionJointSpace_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::schunk_api::PositionJointSpace_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa74335262b2e770707f66d310a2112c";
  }

  static const char* value(const ::schunk_api::PositionJointSpace_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa74335262b2e770ULL;
  static const uint64_t static_value2 = 0x707f66d310a2112cULL;
};

template<class ContainerAllocator>
struct DataType< ::schunk_api::PositionJointSpace_<ContainerAllocator> >
{
  static const char* value()
  {
    return "schunk_api/PositionJointSpace";
  }

  static const char* value(const ::schunk_api::PositionJointSpace_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::schunk_api::PositionJointSpace_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 joint1Position\n\
float64 joint2Position\n\
float64 joint3Position\n\
float64 joint4Position \n\
float64 joint5Position\n\
float64 joint6Position\n\
";
  }

  static const char* value(const ::schunk_api::PositionJointSpace_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::schunk_api::PositionJointSpace_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint1Position);
      stream.next(m.joint2Position);
      stream.next(m.joint3Position);
      stream.next(m.joint4Position);
      stream.next(m.joint5Position);
      stream.next(m.joint6Position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PositionJointSpace_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::schunk_api::PositionJointSpace_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::schunk_api::PositionJointSpace_<ContainerAllocator>& v)
  {
    s << indent << "joint1Position: ";
    Printer<double>::stream(s, indent + "  ", v.joint1Position);
    s << indent << "joint2Position: ";
    Printer<double>::stream(s, indent + "  ", v.joint2Position);
    s << indent << "joint3Position: ";
    Printer<double>::stream(s, indent + "  ", v.joint3Position);
    s << indent << "joint4Position: ";
    Printer<double>::stream(s, indent + "  ", v.joint4Position);
    s << indent << "joint5Position: ";
    Printer<double>::stream(s, indent + "  ", v.joint5Position);
    s << indent << "joint6Position: ";
    Printer<double>::stream(s, indent + "  ", v.joint6Position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHUNK_API_MESSAGE_POSITIONJOINTSPACE_H
