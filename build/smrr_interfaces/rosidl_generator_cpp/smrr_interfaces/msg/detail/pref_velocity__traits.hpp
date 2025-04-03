// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smrr_interfaces:msg/PrefVelocity.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__TRAITS_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smrr_interfaces/msg/detail/pref_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smrr_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PrefVelocity & msg,
  std::ostream & out)
{
  out << "{";
  // member: agent_ids
  {
    if (msg.agent_ids.size() == 0) {
      out << "agent_ids: []";
    } else {
      out << "agent_ids: [";
      size_t pending_items = msg.agent_ids.size();
      for (auto item : msg.agent_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: class_ids
  {
    if (msg.class_ids.size() == 0) {
      out << "class_ids: []";
    } else {
      out << "class_ids: [";
      size_t pending_items = msg.class_ids.size();
      for (auto item : msg.class_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: preferred_velocities
  {
    if (msg.preferred_velocities.size() == 0) {
      out << "preferred_velocities: []";
    } else {
      out << "preferred_velocities: [";
      size_t pending_items = msg.preferred_velocities.size();
      for (auto item : msg.preferred_velocities) {
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
  const PrefVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: agent_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.agent_ids.size() == 0) {
      out << "agent_ids: []\n";
    } else {
      out << "agent_ids:\n";
      for (auto item : msg.agent_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: class_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.class_ids.size() == 0) {
      out << "class_ids: []\n";
    } else {
      out << "class_ids:\n";
      for (auto item : msg.class_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: preferred_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.preferred_velocities.size() == 0) {
      out << "preferred_velocities: []\n";
    } else {
      out << "preferred_velocities:\n";
      for (auto item : msg.preferred_velocities) {
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

inline std::string to_yaml(const PrefVelocity & msg, bool use_flow_style = false)
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
  const smrr_interfaces::msg::PrefVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::msg::PrefVelocity & msg)
{
  return smrr_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::msg::PrefVelocity>()
{
  return "smrr_interfaces::msg::PrefVelocity";
}

template<>
inline const char * name<smrr_interfaces::msg::PrefVelocity>()
{
  return "smrr_interfaces/msg/PrefVelocity";
}

template<>
struct has_fixed_size<smrr_interfaces::msg::PrefVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smrr_interfaces::msg::PrefVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smrr_interfaces::msg::PrefVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__TRAITS_HPP_
