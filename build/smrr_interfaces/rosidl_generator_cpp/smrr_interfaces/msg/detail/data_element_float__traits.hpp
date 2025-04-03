// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smrr_interfaces:msg/DataElementFloat.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__TRAITS_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smrr_interfaces/msg/detail/data_element_float__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smrr_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataElementFloat & msg,
  std::ostream & out)
{
  out << "{";
  // member: float_data
  {
    if (msg.float_data.size() == 0) {
      out << "float_data: []";
    } else {
      out << "float_data: [";
      size_t pending_items = msg.float_data.size();
      for (auto item : msg.float_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataElementFloat & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: float_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float_data.size() == 0) {
      out << "float_data: []\n";
    } else {
      out << "float_data:\n";
      for (auto item : msg.float_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataElementFloat & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace smrr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smrr_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smrr_interfaces::msg::DataElementFloat & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::msg::DataElementFloat & msg)
{
  return smrr_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::msg::DataElementFloat>()
{
  return "smrr_interfaces::msg::DataElementFloat";
}

template<>
inline const char * name<smrr_interfaces::msg::DataElementFloat>()
{
  return "smrr_interfaces/msg/DataElementFloat";
}

template<>
struct has_fixed_size<smrr_interfaces::msg::DataElementFloat>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smrr_interfaces::msg::DataElementFloat>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smrr_interfaces::msg::DataElementFloat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__TRAITS_HPP_
