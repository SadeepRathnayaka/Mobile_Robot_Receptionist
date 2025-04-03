// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smrr_interfaces:msg/Entities.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__ENTITIES__TRAITS_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__ENTITIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smrr_interfaces/msg/detail/entities__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smrr_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Entities & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: classes
  {
    if (msg.classes.size() == 0) {
      out << "classes: []";
    } else {
      out << "classes: [";
      size_t pending_items = msg.classes.size();
      for (auto item : msg.classes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y
  {
    if (msg.y.size() == 0) {
      out << "y: []";
    } else {
      out << "y: [";
      size_t pending_items = msg.y.size();
      for (auto item : msg.y) {
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
  const Entities & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: classes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.classes.size() == 0) {
      out << "classes: []\n";
    } else {
      out << "classes:\n";
      for (auto item : msg.classes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
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

inline std::string to_yaml(const Entities & msg, bool use_flow_style = false)
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
  const smrr_interfaces::msg::Entities & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::msg::Entities & msg)
{
  return smrr_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::msg::Entities>()
{
  return "smrr_interfaces::msg::Entities";
}

template<>
inline const char * name<smrr_interfaces::msg::Entities>()
{
  return "smrr_interfaces/msg/Entities";
}

template<>
struct has_fixed_size<smrr_interfaces::msg::Entities>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smrr_interfaces::msg::Entities>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smrr_interfaces::msg::Entities>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMRR_INTERFACES__MSG__DETAIL__ENTITIES__TRAITS_HPP_
