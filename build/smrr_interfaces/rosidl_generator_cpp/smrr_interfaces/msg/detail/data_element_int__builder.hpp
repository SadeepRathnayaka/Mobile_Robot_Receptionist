// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smrr_interfaces:msg/DataElementInt.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_INT__BUILDER_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smrr_interfaces/msg/detail/data_element_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smrr_interfaces
{

namespace msg
{

namespace builder
{

class Init_DataElementInt_int_data
{
public:
  Init_DataElementInt_int_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::msg::DataElementInt int_data(::smrr_interfaces::msg::DataElementInt::_int_data_type arg)
  {
    msg_.int_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::msg::DataElementInt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::msg::DataElementInt>()
{
  return smrr_interfaces::msg::builder::Init_DataElementInt_int_data();
}

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_INT__BUILDER_HPP_
