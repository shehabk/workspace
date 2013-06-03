/* Auto-generated by genmsg_cpp for file /home/vinay/ROS/ptu_control/msg/PtuResetResult.msg */
#ifndef PTU_CONTROL_MESSAGE_PTURESETRESULT_H
#define PTU_CONTROL_MESSAGE_PTURESETRESULT_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace ptu_control
{
template <class ContainerAllocator>
struct PtuResetResult_ : public ros::Message
{
  typedef PtuResetResult_<ContainerAllocator> Type;

  PtuResetResult_()
  {
  }

  PtuResetResult_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "ptu_control/PtuResetResult"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# result\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::ptu_control::PtuResetResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ptu_control::PtuResetResult_<ContainerAllocator>  const> ConstPtr;
}; // struct PtuResetResult
typedef  ::ptu_control::PtuResetResult_<std::allocator<void> > PtuResetResult;

typedef boost::shared_ptr< ::ptu_control::PtuResetResult> PtuResetResultPtr;
typedef boost::shared_ptr< ::ptu_control::PtuResetResult const> PtuResetResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ptu_control::PtuResetResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ptu_control::PtuResetResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ptu_control

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::ptu_control::PtuResetResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::ptu_control::PtuResetResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ptu_control::PtuResetResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ptu_control/PtuResetResult";
  }

  static const char* value(const  ::ptu_control::PtuResetResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ptu_control::PtuResetResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# result\n\
\n\
";
  }

  static const char* value(const  ::ptu_control::PtuResetResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ptu_control::PtuResetResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ptu_control::PtuResetResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PtuResetResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ptu_control::PtuResetResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ptu_control::PtuResetResult_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // PTU_CONTROL_MESSAGE_PTURESETRESULT_H

