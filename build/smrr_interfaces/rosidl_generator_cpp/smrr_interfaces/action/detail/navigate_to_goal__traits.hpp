// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smrr_interfaces:action/NavigateToGoal.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_GOAL__TRAITS_HPP_
#define SMRR_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smrr_interfaces/action/detail/navigate_to_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smrr_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_x
  {
    out << "goal_x: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_x, out);
    out << ", ";
  }

  // member: goal_y
  {
    out << "goal_y: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_x: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_x, out);
    out << "\n";
  }

  // member: goal_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_y: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace smrr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smrr_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smrr_interfaces::action::NavigateToGoal_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::action::NavigateToGoal_Goal & msg)
{
  return smrr_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_Goal>()
{
  return "smrr_interfaces::action::NavigateToGoal_Goal";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_Goal>()
{
  return "smrr_interfaces/action/NavigateToGoal_Goal";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<smrr_interfaces::action::NavigateToGoal_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace smrr_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace smrr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smrr_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smrr_interfaces::action::NavigateToGoal_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::action::NavigateToGoal_Result & msg)
{
  return smrr_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_Result>()
{
  return "smrr_interfaces::action::NavigateToGoal_Result";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_Result>()
{
  return "smrr_interfaces/action/NavigateToGoal_Result";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<smrr_interfaces::action::NavigateToGoal_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace smrr_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_to_goal
  {
    out << "distance_to_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_to_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_goal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace smrr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smrr_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smrr_interfaces::action::NavigateToGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::action::NavigateToGoal_Feedback & msg)
{
  return smrr_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_Feedback>()
{
  return "smrr_interfaces::action::NavigateToGoal_Feedback";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_Feedback>()
{
  return "smrr_interfaces/action/NavigateToGoal_Feedback";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<smrr_interfaces::action::NavigateToGoal_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "smrr_interfaces/action/detail/navigate_to_goal__traits.hpp"

namespace smrr_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace smrr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smrr_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smrr_interfaces::action::NavigateToGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::action::NavigateToGoal_SendGoal_Request & msg)
{
  return smrr_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_SendGoal_Request>()
{
  return "smrr_interfaces::action::NavigateToGoal_SendGoal_Request";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_SendGoal_Request>()
{
  return "smrr_interfaces/action/NavigateToGoal_SendGoal_Request";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<smrr_interfaces::action::NavigateToGoal_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<smrr_interfaces::action::NavigateToGoal_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<smrr_interfaces::action::NavigateToGoal_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace smrr_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace smrr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smrr_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smrr_interfaces::action::NavigateToGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::action::NavigateToGoal_SendGoal_Response & msg)
{
  return smrr_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_SendGoal_Response>()
{
  return "smrr_interfaces::action::NavigateToGoal_SendGoal_Response";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_SendGoal_Response>()
{
  return "smrr_interfaces/action/NavigateToGoal_SendGoal_Response";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<smrr_interfaces::action::NavigateToGoal_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_SendGoal>()
{
  return "smrr_interfaces::action::NavigateToGoal_SendGoal";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_SendGoal>()
{
  return "smrr_interfaces/action/NavigateToGoal_SendGoal";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<smrr_interfaces::action::NavigateToGoal_SendGoal_Request>::value &&
    has_fixed_size<smrr_interfaces::action::NavigateToGoal_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<smrr_interfaces::action::NavigateToGoal_SendGoal_Request>::value &&
    has_bounded_size<smrr_interfaces::action::NavigateToGoal_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<smrr_interfaces::action::NavigateToGoal_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<smrr_interfaces::action::NavigateToGoal_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<smrr_interfaces::action::NavigateToGoal_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace smrr_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace smrr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smrr_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smrr_interfaces::action::NavigateToGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::action::NavigateToGoal_GetResult_Request & msg)
{
  return smrr_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_GetResult_Request>()
{
  return "smrr_interfaces::action::NavigateToGoal_GetResult_Request";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_GetResult_Request>()
{
  return "smrr_interfaces/action/NavigateToGoal_GetResult_Request";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<smrr_interfaces::action::NavigateToGoal_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "smrr_interfaces/action/detail/navigate_to_goal__traits.hpp"

namespace smrr_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace smrr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smrr_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smrr_interfaces::action::NavigateToGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::action::NavigateToGoal_GetResult_Response & msg)
{
  return smrr_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_GetResult_Response>()
{
  return "smrr_interfaces::action::NavigateToGoal_GetResult_Response";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_GetResult_Response>()
{
  return "smrr_interfaces/action/NavigateToGoal_GetResult_Response";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<smrr_interfaces::action::NavigateToGoal_Result>::value> {};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<smrr_interfaces::action::NavigateToGoal_Result>::value> {};

template<>
struct is_message<smrr_interfaces::action::NavigateToGoal_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_GetResult>()
{
  return "smrr_interfaces::action::NavigateToGoal_GetResult";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_GetResult>()
{
  return "smrr_interfaces/action/NavigateToGoal_GetResult";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<smrr_interfaces::action::NavigateToGoal_GetResult_Request>::value &&
    has_fixed_size<smrr_interfaces::action::NavigateToGoal_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<smrr_interfaces::action::NavigateToGoal_GetResult_Request>::value &&
    has_bounded_size<smrr_interfaces::action::NavigateToGoal_GetResult_Response>::value
  >
{
};

template<>
struct is_service<smrr_interfaces::action::NavigateToGoal_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<smrr_interfaces::action::NavigateToGoal_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<smrr_interfaces::action::NavigateToGoal_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "smrr_interfaces/action/detail/navigate_to_goal__traits.hpp"

namespace smrr_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace smrr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smrr_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smrr_interfaces::action::NavigateToGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  smrr_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smrr_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const smrr_interfaces::action::NavigateToGoal_FeedbackMessage & msg)
{
  return smrr_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<smrr_interfaces::action::NavigateToGoal_FeedbackMessage>()
{
  return "smrr_interfaces::action::NavigateToGoal_FeedbackMessage";
}

template<>
inline const char * name<smrr_interfaces::action::NavigateToGoal_FeedbackMessage>()
{
  return "smrr_interfaces/action/NavigateToGoal_FeedbackMessage";
}

template<>
struct has_fixed_size<smrr_interfaces::action::NavigateToGoal_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<smrr_interfaces::action::NavigateToGoal_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<smrr_interfaces::action::NavigateToGoal_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<smrr_interfaces::action::NavigateToGoal_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<smrr_interfaces::action::NavigateToGoal_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<smrr_interfaces::action::NavigateToGoal>
  : std::true_type
{
};

template<>
struct is_action_goal<smrr_interfaces::action::NavigateToGoal_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<smrr_interfaces::action::NavigateToGoal_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<smrr_interfaces::action::NavigateToGoal_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SMRR_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_GOAL__TRAITS_HPP_
