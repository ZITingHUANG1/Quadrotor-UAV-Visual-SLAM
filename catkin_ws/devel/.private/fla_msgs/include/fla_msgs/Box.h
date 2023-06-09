// Generated by gencpp from file fla_msgs/Box.msg
// DO NOT EDIT!


#ifndef FLA_MSGS_MESSAGE_BOX_H
#define FLA_MSGS_MESSAGE_BOX_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace fla_msgs
{
template <class ContainerAllocator>
struct Box_
{
  typedef Box_<ContainerAllocator> Type;

  Box_()
    : header()
    , origin()
    , size()  {
    }
  Box_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , origin(_alloc)
    , size(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _origin_type;
  _origin_type origin;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _size_type;
  _size_type size;





  typedef boost::shared_ptr< ::fla_msgs::Box_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fla_msgs::Box_<ContainerAllocator> const> ConstPtr;

}; // struct Box_

typedef ::fla_msgs::Box_<std::allocator<void> > Box;

typedef boost::shared_ptr< ::fla_msgs::Box > BoxPtr;
typedef boost::shared_ptr< ::fla_msgs::Box const> BoxConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fla_msgs::Box_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fla_msgs::Box_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::fla_msgs::Box_<ContainerAllocator1> & lhs, const ::fla_msgs::Box_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.origin == rhs.origin &&
    lhs.size == rhs.size;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::fla_msgs::Box_<ContainerAllocator1> & lhs, const ::fla_msgs::Box_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace fla_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::fla_msgs::Box_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fla_msgs::Box_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fla_msgs::Box_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fla_msgs::Box_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fla_msgs::Box_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fla_msgs::Box_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fla_msgs::Box_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3423b5be7e72312adb724b75aba39e1f";
  }

  static const char* value(const ::fla_msgs::Box_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3423b5be7e72312aULL;
  static const uint64_t static_value2 = 0xdb724b75aba39e1fULL;
};

template<class ContainerAllocator>
struct DataType< ::fla_msgs::Box_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fla_msgs/Box";
  }

  static const char* value(const ::fla_msgs::Box_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fla_msgs::Box_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message describing a 3-dimensional rectangular box.\n"
"# Origin is defined as the corner of the box with the minimum x, y, and z values\n"
"# in the cartesian coordinate system provided by header.frame.\n"
"# Size gives the x, y, and z dimensions of the box.\n"
"\n"
"std_msgs/Header header\n"
"geometry_msgs/Vector3 origin\n"
"geometry_msgs/Vector3 size\n"
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

  static const char* value(const ::fla_msgs::Box_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fla_msgs::Box_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.origin);
      stream.next(m.size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Box_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fla_msgs::Box_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fla_msgs::Box_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "origin: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.origin);
    s << indent << "size: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLA_MSGS_MESSAGE_BOX_H
