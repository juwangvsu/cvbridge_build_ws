// Generated by gencpp from file snapstack_msgs/IMU.msg
// DO NOT EDIT!


#ifndef SNAPSTACK_MSGS_MESSAGE_IMU_H
#define SNAPSTACK_MSGS_MESSAGE_IMU_H


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

namespace snapstack_msgs
{
template <class ContainerAllocator>
struct IMU_
{
  typedef IMU_<ContainerAllocator> Type;

  IMU_()
    : header()
    , imu_stamp()
    , gyro()
    , accel()  {
    }
  IMU_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , imu_stamp()
    , gyro(_alloc)
    , accel(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef ros::Time _imu_stamp_type;
  _imu_stamp_type imu_stamp;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gyro_type;
  _gyro_type gyro;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _accel_type;
  _accel_type accel;





  typedef boost::shared_ptr< ::snapstack_msgs::IMU_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snapstack_msgs::IMU_<ContainerAllocator> const> ConstPtr;

}; // struct IMU_

typedef ::snapstack_msgs::IMU_<std::allocator<void> > IMU;

typedef boost::shared_ptr< ::snapstack_msgs::IMU > IMUPtr;
typedef boost::shared_ptr< ::snapstack_msgs::IMU const> IMUConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::snapstack_msgs::IMU_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::snapstack_msgs::IMU_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::snapstack_msgs::IMU_<ContainerAllocator1> & lhs, const ::snapstack_msgs::IMU_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.imu_stamp == rhs.imu_stamp &&
    lhs.gyro == rhs.gyro &&
    lhs.accel == rhs.accel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::snapstack_msgs::IMU_<ContainerAllocator1> & lhs, const ::snapstack_msgs::IMU_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace snapstack_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::snapstack_msgs::IMU_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snapstack_msgs::IMU_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snapstack_msgs::IMU_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snapstack_msgs::IMU_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snapstack_msgs::IMU_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snapstack_msgs::IMU_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::snapstack_msgs::IMU_<ContainerAllocator> >
{
  static const char* value()
  {
    return "af30b8324edc8f629580975b5e9b5b42";
  }

  static const char* value(const ::snapstack_msgs::IMU_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaf30b8324edc8f62ULL;
  static const uint64_t static_value2 = 0x9580975b5e9b5b42ULL;
};

template<class ContainerAllocator>
struct DataType< ::snapstack_msgs::IMU_<ContainerAllocator> >
{
  static const char* value()
  {
    return "snapstack_msgs/IMU";
  }

  static const char* value(const ::snapstack_msgs::IMU_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::snapstack_msgs::IMU_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"time imu_stamp\n"
"geometry_msgs/Vector3 gyro\n"
"geometry_msgs/Vector3 accel\n"
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
;
  }

  static const char* value(const ::snapstack_msgs::IMU_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::snapstack_msgs::IMU_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.imu_stamp);
      stream.next(m.gyro);
      stream.next(m.accel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IMU_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::snapstack_msgs::IMU_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::snapstack_msgs::IMU_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "imu_stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.imu_stamp);
    s << indent << "gyro: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gyro);
    s << indent << "accel: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.accel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SNAPSTACK_MSGS_MESSAGE_IMU_H