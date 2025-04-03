// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smrr_interfaces:msg/Buffer.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__BUFFER__TRAITS_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__BUFFER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smrr_interfaces/msg/detail/buffer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'x_velocities'
// Member 'y_velocities'
// Member 'x_positions'
// Member 'y_positions'
#include "smrr_interfaces/msg/detail/data_element_float__traits.hpp"
// Member 'class_ids'
#include "smrr_interfaces/msg/detail/data_element_string__traits.hpp"

namespace smrr_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Buffer & msg,
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

  // member: agent_count
  {
    out << "agent_count: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_count, out);
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
        to_flow_style_yaml(item, out);
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
        to_flow_style_yaml(item, out);
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
        to_flow_style_yaml(item, out);
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
        to_flow_style_yaml(item, out);
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
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_mean
  {
    if (msg.x_mean.size() == 0) {
      out << "x_mean: []";
    } else {
      out << "x_mean: [";
      size_t pending_items = msg.x_mean.size();
      for (auto item : msg.x_mean) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_mean
  {
    if (msg.y_mean.size() == 0) {
      out << "y_mean: []";
    } else {
      out << "y_mean: [";
      size_t pending_items = msg.y_mean.size();
      for (auto item : msg.y_mean) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_std_dev
  {
    if (msg.x_std_dev.size() == 0) {
      out << "x_std_dev: []";
    } else {
      out << "x_std_dev: [";
      size_t pending_items = msg.x_std_dev.size();
      for (auto item : msg.x_std_dev) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_std_dev
  {
    if (msg.y_std_dev.size() == 0) {
      out << "y_std_dev: []";
    } else {
      out << "y_std_dev: [";
      size_t pending_items = msg.y_std_dev.size();
      for (auto item : msg.y_std_dev) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_variance
  {
    if (msg.x_variance.size() == 0) {
      out << "x_variance: []";
    } else {
      out << "x_variance: [";
      size_t pending_items = msg.x_variance.size();
      for (auto item : msg.x_variance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_variance
  {
    if (msg.y_variance.size() == 0) {
      out << "y_variance: []";
    } else {
      out << "y_variance: [";
      size_t pending_items = msg.y_variance.size();
      for (auto item : msg.y_variance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: majority_class_id
  {
    if (msg.majority_class_id.size() == 0) {
      out << "majority_class_id: []";
    } else {
      out << "majority_class_id: [";
      size_t pending_items = msg.majority_class_id.size();
      for (auto item : msg.majority_class_id) {
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
  const Buffer & msg,
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

  // member: agent_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agent_count: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_count, out);
    out << "\n";
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
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: x_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_mean.size() == 0) {
      out << "x_mean: []\n";
    } else {
      out << "x_mean:\n";
      for (auto item : msg.x_mean) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_mean.size() == 0) {
      out << "y_mean: []\n";
    } else {
      out << "y_mean:\n";
      for (auto item : msg.y_mean) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_std_dev.size() == 0) {
      out << "x_std_dev: []\n";
    } else {
      out << "x_std_dev:\n";
      for (auto item : msg.x_std_dev) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_std_dev.size() == 0) {
      out << "y_std_dev: []\n";
    } else {
      out << "y_std_dev:\n";
      for (auto item : msg.y_std_dev) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_variance.size() == 0) {
      out << "x_variance: []\n";
    } else {
      out << "x_variance:\n";
      for (auto item : msg.x_variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_variance.size() == 0) {
      out << "y_variance: []\n";
    } else {
      out << "y_variance:\n";
      for (auto item : msg.y_variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: majority_class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.majority_class_id.size() == 0) {
      out << "majority_class_id: []\n";
    } else {
      out << "majority_class_id:\n";
      for (auto item : msg.majority_class_id) {
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

inline std::string to_yaml(const Buffer & msg, bool use_flow_style = false)
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
  const smrr_interfaces::msg::Buffer & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::msg::Buffer & msg)
{
  return smrr_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::msg::Buffer>()
{
  return "smrr_interfaces::msg::Buffer";
}

template<>
inline const char * name<smrr_interfaces::msg::Buffer>()
{
  return "smrr_interfaces/msg/Buffer";
}

template<>
struct has_fixed_size<smrr_interfaces::msg::Buffer>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smrr_interfaces::msg::Buffer>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smrr_interfaces::msg::Buffer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMRR_INTERFACES__MSG__DETAIL__BUFFER__TRAITS_HPP_
