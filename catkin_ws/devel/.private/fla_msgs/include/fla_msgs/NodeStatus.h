// Generated by gencpp from file fla_msgs/NodeStatus.msg
// DO NOT EDIT!


#ifndef FLA_MSGS_MESSAGE_NODESTATUS_H
#define FLA_MSGS_MESSAGE_NODESTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fla_msgs
{
template <class ContainerAllocator>
struct NodeStatus_
{
  typedef NodeStatus_<ContainerAllocator> Type;

  NodeStatus_()
    : id(0)
    , pid(0)
    , status(0)
    , arg(0)
    , load(0.0)  {
    }
  NodeStatus_(const ContainerAllocator& _alloc)
    : id(0)
    , pid(0)
    , status(0)
    , arg(0)
    , load(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef uint32_t _pid_type;
  _pid_type pid;

   typedef uint8_t _status_type;
  _status_type status;

   typedef int32_t _arg_type;
  _arg_type arg;

   typedef double _load_type;
  _load_type load;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(INACTIVE)
  #undef INACTIVE
#endif
#if defined(_WIN32) && defined(STARTING)
  #undef STARTING
#endif
#if defined(_WIN32) && defined(INIT)
  #undef INIT
#endif
#if defined(_WIN32) && defined(READY)
  #undef READY
#endif
#if defined(_WIN32) && defined(ALARM)
  #undef ALARM
#endif
#if defined(_WIN32) && defined(FAIL)
  #undef FAIL
#endif
#if defined(_WIN32) && defined(SILENT)
  #undef SILENT
#endif

  enum {
    INACTIVE = 1u,
    STARTING = 2u,
    INIT = 3u,
    READY = 4u,
    ALARM = 5u,
    FAIL = 6u,
    SILENT = 7u,
  };


  typedef boost::shared_ptr< ::fla_msgs::NodeStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fla_msgs::NodeStatus_<ContainerAllocator> const> ConstPtr;

}; // struct NodeStatus_

typedef ::fla_msgs::NodeStatus_<std::allocator<void> > NodeStatus;

typedef boost::shared_ptr< ::fla_msgs::NodeStatus > NodeStatusPtr;
typedef boost::shared_ptr< ::fla_msgs::NodeStatus const> NodeStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fla_msgs::NodeStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fla_msgs::NodeStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::fla_msgs::NodeStatus_<ContainerAllocator1> & lhs, const ::fla_msgs::NodeStatus_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.pid == rhs.pid &&
    lhs.status == rhs.status &&
    lhs.arg == rhs.arg &&
    lhs.load == rhs.load;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::fla_msgs::NodeStatus_<ContainerAllocator1> & lhs, const ::fla_msgs::NodeStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace fla_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::fla_msgs::NodeStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fla_msgs::NodeStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fla_msgs::NodeStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fla_msgs::NodeStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fla_msgs::NodeStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fla_msgs::NodeStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fla_msgs::NodeStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc0e9b8f7a292a18c6b50b43586a86d8";
  }

  static const char* value(const ::fla_msgs::NodeStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc0e9b8f7a292a18ULL;
  static const uint64_t static_value2 = 0xc6b50b43586a86d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::fla_msgs::NodeStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fla_msgs/NodeStatus";
  }

  static const char* value(const ::fla_msgs::NodeStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fla_msgs::NodeStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 INACTIVE=1\n"
"uint8 STARTING=2\n"
"uint8 INIT=3\n"
"uint8 READY=4\n"
"uint8 ALARM=5\n"
"uint8 FAIL=6\n"
"uint8 SILENT=7\n"
"uint32 id\n"
"uint32 pid\n"
"uint8 status\n"
"int32 arg\n"
"float64 load\n"
;
  }

  static const char* value(const ::fla_msgs::NodeStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fla_msgs::NodeStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.pid);
      stream.next(m.status);
      stream.next(m.arg);
      stream.next(m.load);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NodeStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fla_msgs::NodeStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fla_msgs::NodeStatus_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "pid: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pid);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "arg: ";
    Printer<int32_t>::stream(s, indent + "  ", v.arg);
    s << indent << "load: ";
    Printer<double>::stream(s, indent + "  ", v.load);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLA_MSGS_MESSAGE_NODESTATUS_H
