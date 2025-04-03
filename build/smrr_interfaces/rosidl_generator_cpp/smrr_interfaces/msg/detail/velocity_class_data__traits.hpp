// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smrr_interfaces:msg/VelocityClassData.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__TRAITS_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smrr_interfaces/msg/detail/velocity_class_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smrr_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityClassData & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: x_velocities
  {
    if (msg.x_velocities.size() == 0) {
      out << "x_velocities: []";
    } else {
      out << "x_velocities: [";
      size_t pending_items = msg.x_velocities.size();
      for (auto item : msg.x_velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_velocities
  {
    if (msg.y_velocities.size() == 0) {
      out << "y_velocities: []";
    } else {
      out << "y_velocities: [";
      size_t pending_items = msg.y_velocities.size();
      for (auto item : msg.y_velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_positions
  {
    if (msg.x_positions.size() == 0) {
      out << "x_positions: []";
    } else {
      out << "x_positions: [";
      size_t pending_items = msg.x_positions.size();
      for (auto item : msg.x_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_positions
  {
    if (msg.y_positions.size() == 0) {
      out << "y_positions: []";
    } else {
      out << "y_positions: [";
      size_t pending_items = msg.y_positions.size();
      for (auto item : msg.y_positions) {
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
  const VelocityClassData & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: x_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_velocities.size() == 0) {
      out << "x_velocities: []\n";
    } else {
      out << "x_velocities:\n";
      for (auto item : msg.x_velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_velocities.size() == 0) {
      out << "y_velocities: []\n";
    } else {
      out << "y_velocities:\n";
      for (auto item : msg.y_velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_positions.size() == 0) {
      out << "x_positions: []\n";
    } else {
      out << "x_positions:\n";
      for (auto item : msg.x_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_positions.size() == 0) {
      out << "y_positions: []\n";
    } else {
      out << "y_positions:\n";
      for (auto item : msg.y_positions) {
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

inline std::string to_yaml(const VelocityClassData & msg, bool use_flow_style = false)
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
  const smrr_interfaces::msg::VelocityClassData & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::msg::VelocityClassData & msg)
{
  return smrr_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::msg::VelocityClassData>()
{
  return "smrr_interfaces::msg::VelocityClassData";
}

template<>
inline const char * name<smrr_interfaces::msg::VelocityClassData>()
{
  return "smrr_interfaces/msg/VelocityClassData";
}

template<>
struct has_fixed_size<smrr_interfaces::msg::VelocityClassData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smrr_interfaces::msg::VelocityClassData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smrr_interfaces::msg::VelocityClassData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__TRAITS_HPP_
