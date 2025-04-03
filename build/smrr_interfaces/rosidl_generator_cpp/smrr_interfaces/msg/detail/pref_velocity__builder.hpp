// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smrr_interfaces:msg/PrefVelocity.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__BUILDER_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smrr_interfaces/msg/detail/pref_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smrr_interfaces
{

namespace msg
{

namespace builder
{

class Init_PrefVelocity_preferred_velocities
{
public:
  explicit Init_PrefVelocity_preferred_velocities(::smrr_interfaces::msg::PrefVelocity & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::msg::PrefVelocity preferred_velocities(::smrr_interfaces::msg::PrefVelocity::_preferred_velocities_type arg)
  {
    msg_.preferred_velocities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::msg::PrefVelocity msg_;
};

class Init_PrefVelocity_class_ids
{
public:
  explicit Init_PrefVelocity_class_ids(::smrr_interfaces::msg::PrefVelocity & msg)
  : msg_(msg)
  {}
  Init_PrefVelocity_preferred_velocities class_ids(::smrr_interfaces::msg::PrefVelocity::_class_ids_type arg)
  {
    msg_.class_ids = std::move(arg);
    return Init_PrefVelocity_preferred_velocities(msg_);
  }

private:
  ::smrr_interfaces::msg::PrefVelocity msg_;
};

class Init_PrefVelocity_agent_ids
{
public:
  Init_PrefVelocity_agent_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrefVelocity_class_ids agent_ids(::smrr_interfaces::msg::PrefVelocity::_agent_ids_type arg)
  {
    msg_.agent_ids = std::move(arg);
    return Init_PrefVelocity_class_ids(msg_);
  }

private:
  ::smrr_interfaces::msg::PrefVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::msg::PrefVelocity>()
{
  return smrr_interfaces::msg::builder::Init_PrefVelocity_agent_ids();
}

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__BUILDER_HPP_
