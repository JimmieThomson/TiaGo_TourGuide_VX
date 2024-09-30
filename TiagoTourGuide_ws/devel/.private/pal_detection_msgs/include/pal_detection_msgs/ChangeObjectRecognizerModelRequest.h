// Generated by gencpp from file pal_detection_msgs/ChangeObjectRecognizerModelRequest.msg
// DO NOT EDIT!


#ifndef PAL_DETECTION_MSGS_MESSAGE_CHANGEOBJECTRECOGNIZERMODELREQUEST_H
#define PAL_DETECTION_MSGS_MESSAGE_CHANGEOBJECTRECOGNIZERMODELREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_detection_msgs
{
template <class ContainerAllocator>
struct ChangeObjectRecognizerModelRequest_
{
  typedef ChangeObjectRecognizerModelRequest_<ContainerAllocator> Type;

  ChangeObjectRecognizerModelRequest_()
    : model_name()
    , reset_desired_classes_param(false)  {
    }
  ChangeObjectRecognizerModelRequest_(const ContainerAllocator& _alloc)
    : model_name(_alloc)
    , reset_desired_classes_param(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _model_name_type;
  _model_name_type model_name;

   typedef uint8_t _reset_desired_classes_param_type;
  _reset_desired_classes_param_type reset_desired_classes_param;





  typedef boost::shared_ptr< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeObjectRecognizerModelRequest_

typedef ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<std::allocator<void> > ChangeObjectRecognizerModelRequest;

typedef boost::shared_ptr< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest > ChangeObjectRecognizerModelRequestPtr;
typedef boost::shared_ptr< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest const> ChangeObjectRecognizerModelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator2> & rhs)
{
  return lhs.model_name == rhs.model_name &&
    lhs.reset_desired_classes_param == rhs.reset_desired_classes_param;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_detection_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c46978b1fa0abe1a947f524717b449fd";
  }

  static const char* value(const ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc46978b1fa0abe1aULL;
  static const uint64_t static_value2 = 0x947f524717b449fdULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_detection_msgs/ChangeObjectRecognizerModelRequest";
  }

  static const char* value(const ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This service allows to change the object recognizer model\n"
"\n"
"# model_name: New object recognizer model name \n"
"string model_name\n"
"\n"
"# reset_desired_classes_param: reset the desired classes params for the new model\n"
"bool reset_desired_classes_param\n"
;
  }

  static const char* value(const ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_name);
      stream.next(m.reset_desired_classes_param);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeObjectRecognizerModelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_detection_msgs::ChangeObjectRecognizerModelRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.model_name);
    s << indent << "reset_desired_classes_param: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_desired_classes_param);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DETECTION_MSGS_MESSAGE_CHANGEOBJECTRECOGNIZERMODELREQUEST_H
