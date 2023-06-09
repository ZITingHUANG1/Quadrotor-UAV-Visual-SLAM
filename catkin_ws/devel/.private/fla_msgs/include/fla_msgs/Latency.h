// Generated by gencpp from file fla_msgs/Latency.msg
// DO NOT EDIT!


#ifndef FLA_MSGS_MESSAGE_LATENCY_H
#define FLA_MSGS_MESSAGE_LATENCY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace fla_msgs
{
template <class ContainerAllocator>
struct Latency_
{
  typedef Latency_<ContainerAllocator> Type;

  Latency_()
    : header()
    , latency(0.0)  {
    }
  Latency_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , latency(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _latency_type;
  _latency_type latency;





  typedef boost::shared_ptr< ::fla_msgs::Latency_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fla_msgs::Latency_<ContainerAllocator> const> ConstPtr;

}; // struct Latency_

typedef ::fla_msgs::Latency_<std::allocator<void> > Latency;

typedef boost::shared_ptr< ::fla_msgs::Latency > LatencyPtr;
typedef boost::shared_ptr< ::fla_msgs::Latency const> LatencyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fla_msgs::Latency_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fla_msgs::Latency_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::fla_msgs::Latency_<ContainerAllocator1> & lhs, const ::fla_msgs::Latency_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.latency == rhs.latency;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::fla_msgs::Latency_<ContainerAllocator1> & lhs, const ::fla_msgs::Latency_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace fla_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::fla_msgs::Latency_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fla_msgs::Latency_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fla_msgs::Latency_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fla_msgs::Latency_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fla_msgs::Latency_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fla_msgs::Latency_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fla_msgs::Latency_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d52a49060461c16e2604d5e22a14f13";
  }

  static const char* value(const ::fla_msgs::Latency_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d52a49060461c16ULL;
  static const uint64_t static_value2 = 0xe2604d5e22a14f13ULL;
};

template<class ContainerAllocator>
struct DataType< ::fla_msgs::Latency_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fla_msgs/Latency";
  }

  static const char* value(const ::fla_msgs::Latency_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fla_msgs::Latency_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64 latency\n"
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

  static const char* value(const ::fla_msgs::Latency_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fla_msgs::Latency_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.latency);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Latency_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fla_msgs::Latency_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fla_msgs::Latency_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "latency: ";
    Printer<double>::stream(s, indent + "  ", v.latency);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLA_MSGS_MESSAGE_LATENCY_H
