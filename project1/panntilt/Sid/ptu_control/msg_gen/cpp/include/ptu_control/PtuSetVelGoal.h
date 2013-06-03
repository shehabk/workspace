/* Auto-generated by genmsg_cpp for file /home/vinay/ROS/ptu_control/msg/PtuSetVelGoal.msg */
#ifndef PTU_CONTROL_MESSAGE_PTUSETVELGOAL_H
#define PTU_CONTROL_MESSAGE_PTUSETVELGOAL_H
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
struct PtuSetVelGoal_ : public ros::Message
{
  typedef PtuSetVelGoal_<ContainerAllocator> Type;

  PtuSetVelGoal_()
  : pan_vel(0.0)
  , tilt_vel(0.0)
  {
  }

  PtuSetVelGoal_(const ContainerAllocator& _alloc)
  : pan_vel(0.0)
  , tilt_vel(0.0)
  {
  }

  typedef float _pan_vel_type;
  float pan_vel;

  typedef float _tilt_vel_type;
  float tilt_vel;


private:
  static const char* __s_getDataType_() { return "ptu_control/PtuSetVelGoal"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "b7cd6f56e9f8de7ca60102f67cb2581f"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# goal\n\
float32 pan_vel\n\
float32 tilt_vel\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, pan_vel);
    ros::serialization::serialize(stream, tilt_vel);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, pan_vel);
    ros::serialization::deserialize(stream, tilt_vel);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(pan_vel);
    size += ros::serialization::serializationLength(tilt_vel);
    return size;
  }

  typedef boost::shared_ptr< ::ptu_control::PtuSetVelGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ptu_control::PtuSetVelGoal_<ContainerAllocator>  const> ConstPtr;
}; // struct PtuSetVelGoal
typedef  ::ptu_control::PtuSetVelGoal_<std::allocator<void> > PtuSetVelGoal;

typedef boost::shared_ptr< ::ptu_control::PtuSetVelGoal> PtuSetVelGoalPtr;
typedef boost::shared_ptr< ::ptu_control::PtuSetVelGoal const> PtuSetVelGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ptu_control::PtuSetVelGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ptu_control::PtuSetVelGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ptu_control

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::ptu_control::PtuSetVelGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b7cd6f56e9f8de7ca60102f67cb2581f";
  }

  static const char* value(const  ::ptu_control::PtuSetVelGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb7cd6f56e9f8de7cULL;
  static const uint64_t static_value2 = 0xa60102f67cb2581fULL;
};

template<class ContainerAllocator>
struct DataType< ::ptu_control::PtuSetVelGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ptu_control/PtuSetVelGoal";
  }

  static const char* value(const  ::ptu_control::PtuSetVelGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ptu_control::PtuSetVelGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# goal\n\
float32 pan_vel\n\
float32 tilt_vel\n\
\n\
";
  }

  static const char* value(const  ::ptu_control::PtuSetVelGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ptu_control::PtuSetVelGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ptu_control::PtuSetVelGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.pan_vel);
    stream.next(m.tilt_vel);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PtuSetVelGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ptu_control::PtuSetVelGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ptu_control::PtuSetVelGoal_<ContainerAllocator> & v) 
  {
    s << indent << "pan_vel: ";
    Printer<float>::stream(s, indent + "  ", v.pan_vel);
    s << indent << "tilt_vel: ";
    Printer<float>::stream(s, indent + "  ", v.tilt_vel);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PTU_CONTROL_MESSAGE_PTUSETVELGOAL_H

