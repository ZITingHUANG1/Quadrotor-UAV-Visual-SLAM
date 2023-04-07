// Generated by gencpp from file fla_msgs/ProcessStatus.msg
// DO NOT EDIT!


#ifndef FLA_MSGS_MESSAGE_PROCESSSTATUS_H
#define FLA_MSGS_MESSAGE_PROCESSSTATUS_H


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
struct ProcessStatus_
{
  typedef ProcessStatus_<ContainerAllocator> Type;

  ProcessStatus_()
    : header()
    , pid(0)
    , name()
    , hostname()
    , status(0)
    , message()  {
    }
  ProcessStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pid(0)
    , name(_alloc)
    , hostname(_alloc)
    , status(0)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _pid_type;
  _pid_type pid;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _hostname_type;
  _hostname_type hostname;

   typedef uint8_t _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;



// reducing the odds to have name collisions with Windows.h 
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

  enum {
    INIT = 3u,
    READY = 4u,
    ALARM = 5u,
    FAIL = 6u,
  };


  typedef boost::shared_ptr< ::fla_msgs::ProcessStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fla_msgs::ProcessStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ProcessStatus_

typedef ::fla_msgs::ProcessStatus_<std::allocator<void> > ProcessStatus;

typedef boost::shared_ptr< ::fla_msgs::ProcessStatus > ProcessStatusPtr;
typedef boost::shared_ptr< ::fla_msgs::ProcessStatus const> ProcessStatusConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fla_msgs::ProcessStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fla_msgs::ProcessStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::fla_msgs::ProcessStatus_<ContainerAllocator1> & lhs, const ::fla_msgs::ProcessStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.pid == rhs.pid &&
    lhs.name == rhs.name &&
    lhs.hostname == rhs.hostname &&
    lhs.status == rhs.status &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::fla_msgs::ProcessStatus_<ContainerAllocator1> & lhs, const ::fla_msgs::ProcessStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace fla_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::fla_msgs::ProcessStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fla_msgs::ProcessStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fla_msgs::ProcessStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fla_msgs::ProcessStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fla_msgs::ProcessStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fla_msgs::ProcessStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fla_msgs::ProcessStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deda7773ae20bf2b053b7c147297cf13";
  }

  static const char* value(const ::fla_msgs::ProcessStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdeda7773ae20bf2bULL;
  static const uint64_t static_value2 = 0x053b7c147297cf13ULL;
};

template<class ContainerAllocator>
struct DataType< ::fla_msgs::ProcessStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fla_msgs/ProcessStatus";
  }

  static const char* value(const ::fla_msgs::ProcessStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fla_msgs::ProcessStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"uint32 pid\n"
"string name\n"
"string hostname\n"
"uint8 status\n"
"string message\n"
"\n"
"uint8 INIT=3\n"
"uint8 READY=4\n"
"uint8 ALARM=5\n"
"uint8 FAIL=6\n"
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

  static const char* value(const ::fla_msgs::ProcessStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fla_msgs::ProcessStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pid);
      stream.next(m.name);
      stream.next(m.hostname);
      stream.next(m.status);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ProcessStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fla_msgs::ProcessStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fla_msgs::ProcessStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pid: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pid);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "hostname: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.hostname);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLA_MSGS_MESSAGE_PROCESSSTATUS_H