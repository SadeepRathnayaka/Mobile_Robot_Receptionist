// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smrr_interfaces:msg/DataElementFloat.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__BUILDER_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smrr_interfaces/msg/detail/data_element_float__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smrr_interfaces
{

namespace msg
{

namespace builder
{

class Init_DataElementFloat_float_data
{
public:
  Init_DataElementFloat_float_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::msg::DataElementFloat float_data(::smrr_interfaces::msg::DataElementFloat::_float_data_type arg)
  {
    msg_.float_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::msg::DataElementFloat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::msg::DataElementFloat>()
{
  return smrr_interfaces::msg::builder::Init_DataElementFloat_float_data();
}

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__BUILDER_HPP_
