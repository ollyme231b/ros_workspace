// Generated by gencpp from file marvelmind_nav/beacon_distance.msg
// DO NOT EDIT!


#ifndef MARVELMIND_NAV_MESSAGE_BEACON_DISTANCE_H
#define MARVELMIND_NAV_MESSAGE_BEACON_DISTANCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace marvelmind_nav
{
template <class ContainerAllocator>
struct beacon_distance_
{
  typedef beacon_distance_<ContainerAllocator> Type;

  beacon_distance_()
    : address_hedge(0)
    , address_beacon(0)
    , distance_m(0.0)  {
    }
  beacon_distance_(const ContainerAllocator& _alloc)
    : address_hedge(0)
    , address_beacon(0)
    , distance_m(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _address_hedge_type;
  _address_hedge_type address_hedge;

   typedef uint8_t _address_beacon_type;
  _address_beacon_type address_beacon;

   typedef double _distance_m_type;
  _distance_m_type distance_m;





  typedef boost::shared_ptr< ::marvelmind_nav::beacon_distance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marvelmind_nav::beacon_distance_<ContainerAllocator> const> ConstPtr;

}; // struct beacon_distance_

typedef ::marvelmind_nav::beacon_distance_<std::allocator<void> > beacon_distance;

typedef boost::shared_ptr< ::marvelmind_nav::beacon_distance > beacon_distancePtr;
typedef boost::shared_ptr< ::marvelmind_nav::beacon_distance const> beacon_distanceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marvelmind_nav::beacon_distance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marvelmind_nav::beacon_distance_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace marvelmind_nav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'marvelmind_nav': ['/home/jasonanderson/ME102B_Project/ros_workspace/src/marvelmind_nav/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::marvelmind_nav::beacon_distance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marvelmind_nav::beacon_distance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marvelmind_nav::beacon_distance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marvelmind_nav::beacon_distance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marvelmind_nav::beacon_distance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marvelmind_nav::beacon_distance_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marvelmind_nav::beacon_distance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0961792211a42c14a3b38a49e24931f3";
  }

  static const char* value(const ::marvelmind_nav::beacon_distance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0961792211a42c14ULL;
  static const uint64_t static_value2 = 0xa3b38a49e24931f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::marvelmind_nav::beacon_distance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marvelmind_nav/beacon_distance";
  }

  static const char* value(const ::marvelmind_nav::beacon_distance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marvelmind_nav::beacon_distance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 address_hedge\n\
uint8 address_beacon\n\
float64 distance_m\n\
";
  }

  static const char* value(const ::marvelmind_nav::beacon_distance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marvelmind_nav::beacon_distance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.address_hedge);
      stream.next(m.address_beacon);
      stream.next(m.distance_m);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct beacon_distance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marvelmind_nav::beacon_distance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marvelmind_nav::beacon_distance_<ContainerAllocator>& v)
  {
    s << indent << "address_hedge: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.address_hedge);
    s << indent << "address_beacon: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.address_beacon);
    s << indent << "distance_m: ";
    Printer<double>::stream(s, indent + "  ", v.distance_m);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARVELMIND_NAV_MESSAGE_BEACON_DISTANCE_H
