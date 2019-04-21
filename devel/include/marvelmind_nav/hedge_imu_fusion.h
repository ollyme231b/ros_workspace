// Generated by gencpp from file marvelmind_nav/hedge_imu_fusion.msg
// DO NOT EDIT!


#ifndef MARVELMIND_NAV_MESSAGE_HEDGE_IMU_FUSION_H
#define MARVELMIND_NAV_MESSAGE_HEDGE_IMU_FUSION_H


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
struct hedge_imu_fusion_
{
  typedef hedge_imu_fusion_<ContainerAllocator> Type;

  hedge_imu_fusion_()
    : timestamp_ms(0)
    , x_m(0.0)
    , y_m(0.0)
    , z_m(0.0)
    , qw(0.0)
    , qx(0.0)
    , qy(0.0)
    , qz(0.0)
    , vx(0.0)
    , vy(0.0)
    , vz(0.0)
    , ax(0.0)
    , ay(0.0)
    , az(0.0)  {
    }
  hedge_imu_fusion_(const ContainerAllocator& _alloc)
    : timestamp_ms(0)
    , x_m(0.0)
    , y_m(0.0)
    , z_m(0.0)
    , qw(0.0)
    , qx(0.0)
    , qy(0.0)
    , qz(0.0)
    , vx(0.0)
    , vy(0.0)
    , vz(0.0)
    , ax(0.0)
    , ay(0.0)
    , az(0.0)  {
  (void)_alloc;
    }



   typedef int64_t _timestamp_ms_type;
  _timestamp_ms_type timestamp_ms;

   typedef double _x_m_type;
  _x_m_type x_m;

   typedef double _y_m_type;
  _y_m_type y_m;

   typedef double _z_m_type;
  _z_m_type z_m;

   typedef double _qw_type;
  _qw_type qw;

   typedef double _qx_type;
  _qx_type qx;

   typedef double _qy_type;
  _qy_type qy;

   typedef double _qz_type;
  _qz_type qz;

   typedef double _vx_type;
  _vx_type vx;

   typedef double _vy_type;
  _vy_type vy;

   typedef double _vz_type;
  _vz_type vz;

   typedef double _ax_type;
  _ax_type ax;

   typedef double _ay_type;
  _ay_type ay;

   typedef double _az_type;
  _az_type az;





  typedef boost::shared_ptr< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> const> ConstPtr;

}; // struct hedge_imu_fusion_

typedef ::marvelmind_nav::hedge_imu_fusion_<std::allocator<void> > hedge_imu_fusion;

typedef boost::shared_ptr< ::marvelmind_nav::hedge_imu_fusion > hedge_imu_fusionPtr;
typedef boost::shared_ptr< ::marvelmind_nav::hedge_imu_fusion const> hedge_imu_fusionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace marvelmind_nav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'marvelmind_nav': ['/home/rohan/Documents/Project-Olly/ros_workspace/src/marvelmind_nav/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "80fa4231724bd716826855f463bf5400";
  }

  static const char* value(const ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x80fa4231724bd716ULL;
  static const uint64_t static_value2 = 0x826855f463bf5400ULL;
};

template<class ContainerAllocator>
struct DataType< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marvelmind_nav/hedge_imu_fusion";
  }

  static const char* value(const ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 timestamp_ms\n\
float64 x_m\n\
float64 y_m\n\
float64 z_m\n\
float64 qw\n\
float64 qx\n\
float64 qy\n\
float64 qz\n\
float64 vx\n\
float64 vy\n\
float64 vz\n\
float64 ax\n\
float64 ay\n\
float64 az\n\
\n\
";
  }

  static const char* value(const ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp_ms);
      stream.next(m.x_m);
      stream.next(m.y_m);
      stream.next(m.z_m);
      stream.next(m.qw);
      stream.next(m.qx);
      stream.next(m.qy);
      stream.next(m.qz);
      stream.next(m.vx);
      stream.next(m.vy);
      stream.next(m.vz);
      stream.next(m.ax);
      stream.next(m.ay);
      stream.next(m.az);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct hedge_imu_fusion_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marvelmind_nav::hedge_imu_fusion_<ContainerAllocator>& v)
  {
    s << indent << "timestamp_ms: ";
    Printer<int64_t>::stream(s, indent + "  ", v.timestamp_ms);
    s << indent << "x_m: ";
    Printer<double>::stream(s, indent + "  ", v.x_m);
    s << indent << "y_m: ";
    Printer<double>::stream(s, indent + "  ", v.y_m);
    s << indent << "z_m: ";
    Printer<double>::stream(s, indent + "  ", v.z_m);
    s << indent << "qw: ";
    Printer<double>::stream(s, indent + "  ", v.qw);
    s << indent << "qx: ";
    Printer<double>::stream(s, indent + "  ", v.qx);
    s << indent << "qy: ";
    Printer<double>::stream(s, indent + "  ", v.qy);
    s << indent << "qz: ";
    Printer<double>::stream(s, indent + "  ", v.qz);
    s << indent << "vx: ";
    Printer<double>::stream(s, indent + "  ", v.vx);
    s << indent << "vy: ";
    Printer<double>::stream(s, indent + "  ", v.vy);
    s << indent << "vz: ";
    Printer<double>::stream(s, indent + "  ", v.vz);
    s << indent << "ax: ";
    Printer<double>::stream(s, indent + "  ", v.ax);
    s << indent << "ay: ";
    Printer<double>::stream(s, indent + "  ", v.ay);
    s << indent << "az: ";
    Printer<double>::stream(s, indent + "  ", v.az);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARVELMIND_NAV_MESSAGE_HEDGE_IMU_FUSION_H
