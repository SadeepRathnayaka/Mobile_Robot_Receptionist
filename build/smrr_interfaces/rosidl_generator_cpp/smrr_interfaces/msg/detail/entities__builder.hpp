// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smrr_interfaces:msg/Entities.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__ENTITIES__BUILDER_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__ENTITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smrr_interfaces/msg/detail/entities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smrr_interfaces
{

namespace msg
{

namespace builder
{

class Init_Entities_y
{
public:
  explicit Init_Entities_y(::smrr_interfaces::msg::Entities & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::msg::Entities y(::smrr_interfaces::msg::Entities::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::msg::Entities msg_;
};

class Init_Entities_x
{
public:
  explicit Init_Entities_x(::smrr_interfaces::msg::Entities & msg)
  : msg_(msg)
  {}
  Init_Entities_y x(::smrr_interfaces::msg::Entities::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Entities_y(msg_);
  }

private:
  ::smrr_interfaces::msg::Entities msg_;
};

class Init_Entities_classes
{
public:
  explicit Init_Entities_classes(::smrr_interfaces::msg::Entities & msg)
  : msg_(msg)
  {}
  Init_Entities_x classes(::smrr_interfaces::msg::Entities::_classes_type arg)
  {
    msg_.classes = std::move(arg);
    return Init_Entities_x(msg_);
  }

private:
  ::smrr_interfaces::msg::Entities msg_;
};

class Init_Entities_count
{
public:
  Init_Entities_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Entities_classes count(::smrr_interfaces::msg::Entities::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_Entities_classes(msg_);
  }

private:
  ::smrr_interfaces::msg::Entities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::msg::Entities>()
{
  return smrr_interfaces::msg::builder::Init_Entities_count();
}

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__ENTITIES__BUILDER_HPP_
