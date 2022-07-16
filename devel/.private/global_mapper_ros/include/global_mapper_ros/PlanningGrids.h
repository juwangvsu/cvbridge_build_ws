// Generated by gencpp from file global_mapper_ros/PlanningGrids.msg
// DO NOT EDIT!


#ifndef GLOBAL_MAPPER_ROS_MESSAGE_PLANNINGGRIDS_H
#define GLOBAL_MAPPER_ROS_MESSAGE_PLANNINGGRIDS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace global_mapper_ros
{
template <class ContainerAllocator>
struct PlanningGrids_
{
  typedef PlanningGrids_<ContainerAllocator> Type;

  PlanningGrids_()
    : header()
    , projected_goal()
    , origin()
    , grid_dimensions()
    , resolution(0.0)
    , occupancy_data()
    , distance_data()
    , cost_data()
    , occupied_threshold(0.0)
    , dmax(0)  {
      projected_goal.assign(0.0);

      origin.assign(0.0);

      grid_dimensions.assign(0);
  }
  PlanningGrids_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , projected_goal()
    , origin()
    , grid_dimensions()
    , resolution(0.0)
    , occupancy_data(_alloc)
    , distance_data(_alloc)
    , cost_data(_alloc)
    , occupied_threshold(0.0)
    , dmax(0)  {
  (void)_alloc;
      projected_goal.assign(0.0);

      origin.assign(0.0);

      grid_dimensions.assign(0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array<double, 3>  _projected_goal_type;
  _projected_goal_type projected_goal;

   typedef boost::array<double, 3>  _origin_type;
  _origin_type origin;

   typedef boost::array<int32_t, 3>  _grid_dimensions_type;
  _grid_dimensions_type grid_dimensions;

   typedef double _resolution_type;
  _resolution_type resolution;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _occupancy_data_type;
  _occupancy_data_type occupancy_data;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _distance_data_type;
  _distance_data_type distance_data;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _cost_data_type;
  _cost_data_type cost_data;

   typedef float _occupied_threshold_type;
  _occupied_threshold_type occupied_threshold;

   typedef int32_t _dmax_type;
  _dmax_type dmax;





  typedef boost::shared_ptr< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> const> ConstPtr;

}; // struct PlanningGrids_

typedef ::global_mapper_ros::PlanningGrids_<std::allocator<void> > PlanningGrids;

typedef boost::shared_ptr< ::global_mapper_ros::PlanningGrids > PlanningGridsPtr;
typedef boost::shared_ptr< ::global_mapper_ros::PlanningGrids const> PlanningGridsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::global_mapper_ros::PlanningGrids_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::global_mapper_ros::PlanningGrids_<ContainerAllocator1> & lhs, const ::global_mapper_ros::PlanningGrids_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.projected_goal == rhs.projected_goal &&
    lhs.origin == rhs.origin &&
    lhs.grid_dimensions == rhs.grid_dimensions &&
    lhs.resolution == rhs.resolution &&
    lhs.occupancy_data == rhs.occupancy_data &&
    lhs.distance_data == rhs.distance_data &&
    lhs.cost_data == rhs.cost_data &&
    lhs.occupied_threshold == rhs.occupied_threshold &&
    lhs.dmax == rhs.dmax;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::global_mapper_ros::PlanningGrids_<ContainerAllocator1> & lhs, const ::global_mapper_ros::PlanningGrids_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace global_mapper_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> >
{
  static const char* value()
  {
    return "86653f2401f7e451293296585b426430";
  }

  static const char* value(const ::global_mapper_ros::PlanningGrids_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x86653f2401f7e451ULL;
  static const uint64_t static_value2 = 0x293296585b426430ULL;
};

template<class ContainerAllocator>
struct DataType< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> >
{
  static const char* value()
  {
    return "global_mapper_ros/PlanningGrids";
  }

  static const char* value(const ::global_mapper_ros::PlanningGrids_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float64[3] projected_goal  # current position of projected goal within the grid\n"
"float64[3] origin  # center of map in global frame [m]\n"
"int32[3] grid_dimensions  # size of map [voxels]\n"
"float64 resolution  # voxel size [m]\n"
"\n"
"float32[] occupancy_data\n"
"int32[] distance_data\n"
"int32[] cost_data\n"
"\n"
"float32 occupied_threshold #occupancy values above this are considered 'occupied'\n"
"int32 dmax  #max squared distance reported in distance_grid\n"
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
;
  }

  static const char* value(const ::global_mapper_ros::PlanningGrids_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.projected_goal);
      stream.next(m.origin);
      stream.next(m.grid_dimensions);
      stream.next(m.resolution);
      stream.next(m.occupancy_data);
      stream.next(m.distance_data);
      stream.next(m.cost_data);
      stream.next(m.occupied_threshold);
      stream.next(m.dmax);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanningGrids_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::global_mapper_ros::PlanningGrids_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::global_mapper_ros::PlanningGrids_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "projected_goal[]" << std::endl;
    for (size_t i = 0; i < v.projected_goal.size(); ++i)
    {
      s << indent << "  projected_goal[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.projected_goal[i]);
    }
    s << indent << "origin[]" << std::endl;
    for (size_t i = 0; i < v.origin.size(); ++i)
    {
      s << indent << "  origin[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.origin[i]);
    }
    s << indent << "grid_dimensions[]" << std::endl;
    for (size_t i = 0; i < v.grid_dimensions.size(); ++i)
    {
      s << indent << "  grid_dimensions[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.grid_dimensions[i]);
    }
    s << indent << "resolution: ";
    Printer<double>::stream(s, indent + "  ", v.resolution);
    s << indent << "occupancy_data[]" << std::endl;
    for (size_t i = 0; i < v.occupancy_data.size(); ++i)
    {
      s << indent << "  occupancy_data[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.occupancy_data[i]);
    }
    s << indent << "distance_data[]" << std::endl;
    for (size_t i = 0; i < v.distance_data.size(); ++i)
    {
      s << indent << "  distance_data[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.distance_data[i]);
    }
    s << indent << "cost_data[]" << std::endl;
    for (size_t i = 0; i < v.cost_data.size(); ++i)
    {
      s << indent << "  cost_data[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.cost_data[i]);
    }
    s << indent << "occupied_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.occupied_threshold);
    s << indent << "dmax: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dmax);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GLOBAL_MAPPER_ROS_MESSAGE_PLANNINGGRIDS_H
