// Generated by gencpp from file snapstack_msgs/State.msg
// DO NOT EDIT!


#ifndef SNAPSTACK_MSGS_MESSAGE_STATE_H
#define SNAPSTACK_MSGS_MESSAGE_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace snapstack_msgs
{
template <class ContainerAllocator>
struct State_
{
  typedef State_<ContainerAllocator> Type;

  State_()
    : header()
    , state_stamp()
    , pos()
    , vel()
    , quat()
    , w()
    , abias()
    , gbias()  {
    }
  State_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state_stamp()
    , pos(_alloc)
    , vel(_alloc)
    , quat(_alloc)
    , w(_alloc)
    , abias(_alloc)
    , gbias(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef ros::Time _state_stamp_type;
  _state_stamp_type state_stamp;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _pos_type;
  _pos_type pos;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _vel_type;
  _vel_type vel;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _quat_type;
  _quat_type quat;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _w_type;
  _w_type w;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _abias_type;
  _abias_type abias;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gbias_type;
  _gbias_type gbias;





  typedef boost::shared_ptr< ::snapstack_msgs::State_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snapstack_msgs::State_<ContainerAllocator> const> ConstPtr;

}; // struct State_

typedef ::snapstack_msgs::State_<std::allocator<void> > State;

typedef boost::shared_ptr< ::snapstack_msgs::State > StatePtr;
typedef boost::shared_ptr< ::snapstack_msgs::State const> StateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::snapstack_msgs::State_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::snapstack_msgs::State_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::snapstack_msgs::State_<ContainerAllocator1> & lhs, const ::snapstack_msgs::State_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.state_stamp == rhs.state_stamp &&
    lhs.pos == rhs.pos &&
    lhs.vel == rhs.vel &&
    lhs.quat == rhs.quat &&
    lhs.w == rhs.w &&
    lhs.abias == rhs.abias &&
    lhs.gbias == rhs.gbias;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::snapstack_msgs::State_<ContainerAllocator1> & lhs, const ::snapstack_msgs::State_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace snapstack_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::snapstack_msgs::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snapstack_msgs::State_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snapstack_msgs::State_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snapstack_msgs::State_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snapstack_msgs::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snapstack_msgs::State_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::snapstack_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d541639d4febb63bce9ed67bfaf4f2ba";
  }

  static const char* value(const ::snapstack_msgs::State_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd541639d4febb63bULL;
  static const uint64_t static_value2 = 0xce9ed67bfaf4f2baULL;
};

template<class ContainerAllocator>
struct DataType< ::snapstack_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "snapstack_msgs/State";
  }

  static const char* value(const ::snapstack_msgs::State_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::snapstack_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"time state_stamp\n"
"geometry_msgs/Vector3 pos\n"
"geometry_msgs/Vector3 vel\n"
"geometry_msgs/Quaternion quat\n"
"geometry_msgs/Vector3 w\n"
"geometry_msgs/Vector3 abias\n"
"geometry_msgs/Vector3 gbias\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::snapstack_msgs::State_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::snapstack_msgs::State_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state_stamp);
      stream.next(m.pos);
      stream.next(m.vel);
      stream.next(m.quat);
      stream.next(m.w);
      stream.next(m.abias);
      stream.next(m.gbias);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct State_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::snapstack_msgs::State_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::snapstack_msgs::State_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state_stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.state_stamp);
    s << indent << "pos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.pos);
    s << indent << "vel: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.vel);
    s << indent << "quat: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.quat);
    s << indent << "w: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.w);
    s << indent << "abias: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.abias);
    s << indent << "gbias: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gbias);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SNAPSTACK_MSGS_MESSAGE_STATE_H
