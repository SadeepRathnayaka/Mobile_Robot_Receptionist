// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smrr_interfaces:msg/VelocityClassData.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__BUILDER_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smrr_interfaces/msg/detail/velocity_class_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smrr_interfaces
{

namespace msg
{

namespace builder
{

class Init_VelocityClassData_y_positions
{
public:
  explicit Init_VelocityClassData_y_positions(::smrr_interfaces::msg::VelocityClassData & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::msg::VelocityClassData y_positions(::smrr_interfaces::msg::VelocityClassData::_y_positions_type arg)
  {
    msg_.y_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::msg::VelocityClassData msg_;
};

class Init_VelocityClassData_x_positions
{
public:
  explicit Init_VelocityClassData_x_positions(::smrr_interfaces::msg::VelocityClassData & msg)
  : msg_(msg)
  {}
  Init_VelocityClassData_y_positions x_positions(::smrr_interfaces::msg::VelocityClassData::_x_positions_type arg)
  {
    msg_.x_positions = std::move(arg);
    return Init_VelocityClassData_y_positions(msg_);
  }

private:
  ::smrr_interfaces::msg::VelocityClassData msg_;
};

class Init_VelocityClassData_y_velocities
{
public:
  explicit Init_VelocityClassData_y_velocities(::smrr_interfaces::msg::VelocityClassData & msg)
  : msg_(msg)
  {}
  Init_VelocityClassData_x_positions y_velocities(::smrr_interfaces::msg::VelocityClassData::_y_velocities_type arg)
  {
    msg_.y_velocities = std::move(arg);
    return Init_VelocityClassData_x_positions(msg_);
  }

private:
  ::smrr_interfaces::msg::VelocityClassData msg_;
};

class Init_VelocityClassData_x_velocities
{
public:
  explicit Init_VelocityClassData_x_velocities(::smrr_interfaces::msg::VelocityClassData & msg)
  : msg_(msg)
  {}
  Init_VelocityClassData_y_velocities x_velocities(::smrr_interfaces::msg::VelocityClassData::_x_velocities_type arg)
  {
    msg_.x_velocities = std::move(arg);
    return Init_VelocityClassData_y_velocities(msg_);
  }

private:
  ::smrr_interfaces::msg::VelocityClassData msg_;
};

class Init_VelocityClassData_class_ids
{
public:
  Init_VelocityClassData_class_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityClassData_x_velocities class_ids(::smrr_interfaces::msg::VelocityClassData::_class_ids_type arg)
  {
    msg_.class_ids = std::move(arg);
    return Init_VelocityClassData_x_velocities(msg_);
  }

private:
  ::smrr_interfaces::msg::VelocityClassData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::msg::VelocityClassData>()
{
  return smrr_interfaces::msg::builder::Init_VelocityClassData_class_ids();
}

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__BUILDER_HPP_
