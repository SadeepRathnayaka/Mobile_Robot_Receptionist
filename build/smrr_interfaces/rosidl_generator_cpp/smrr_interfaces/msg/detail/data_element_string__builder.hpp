// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smrr_interfaces:msg/DataElementString.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_STRING__BUILDER_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smrr_interfaces/msg/detail/data_element_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smrr_interfaces
{

namespace msg
{

namespace builder
{

class Init_DataElementString_string_data
{
public:
  Init_DataElementString_string_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::msg::DataElementString string_data(::smrr_interfaces::msg::DataElementString::_string_data_type arg)
  {
    msg_.string_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::msg::DataElementString msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::msg::DataElementString>()
{
  return smrr_interfaces::msg::builder::Init_DataElementString_string_data();
}

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_STRING__BUILDER_HPP_
