// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smrr_interfaces:msg/Yolov10Inference.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__TRAITS_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smrr_interfaces/msg/detail/yolov10_inference__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'yolov10_inference'
#include "smrr_interfaces/msg/detail/inference_result__traits.hpp"

namespace smrr_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Yolov10Inference & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: yolov10_inference
  {
    if (msg.yolov10_inference.size() == 0) {
      out << "yolov10_inference: []";
    } else {
      out << "yolov10_inference: [";
      size_t pending_items = msg.yolov10_inference.size();
      for (auto item : msg.yolov10_inference) {
        to_flow_style_yaml(item, out);
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
  const Yolov10Inference & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: yolov10_inference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yolov10_inference.size() == 0) {
      out << "yolov10_inference: []\n";
    } else {
      out << "yolov10_inference:\n";
      for (auto item : msg.yolov10_inference) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Yolov10Inference & msg, bool use_flow_style = false)
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
  const smrr_interfaces::msg::Yolov10Inference & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::msg::Yolov10Inference & msg)
{
  return smrr_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::msg::Yolov10Inference>()
{
  return "smrr_interfaces::msg::Yolov10Inference";
}

template<>
inline const char * name<smrr_interfaces::msg::Yolov10Inference>()
{
  return "smrr_interfaces/msg/Yolov10Inference";
}

template<>
struct has_fixed_size<smrr_interfaces::msg::Yolov10Inference>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smrr_interfaces::msg::Yolov10Inference>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smrr_interfaces::msg::Yolov10Inference>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__TRAITS_HPP_
