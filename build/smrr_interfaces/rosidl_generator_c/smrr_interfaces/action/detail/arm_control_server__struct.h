// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smrr_interfaces:action/ArmControlServer.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__ACTION__DETAIL__ARM_CONTROL_SERVER__STRUCT_H_
#define SMRR_INTERFACES__ACTION__DETAIL__ARM_CONTROL_SERVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_joints_angles'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"

/// Struct defined in action/ArmControlServer in the package smrr_interfaces.
typedef struct smrr_interfaces__action__ArmControlServer_Goal
{
  std_msgs__msg__Float64MultiArray target_joints_angles;
} smrr_interfaces__action__ArmControlServer_Goal;

// Struct for a sequence of smrr_interfaces__action__ArmControlServer_Goal.
typedef struct smrr_interfaces__action__ArmControlServer_Goal__Sequence
{
  smrr_interfaces__action__ArmControlServer_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__action__ArmControlServer_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ArmControlServer in the package smrr_interfaces.
typedef struct smrr_interfaces__action__ArmControlServer_Result
{
  bool success;
} smrr_interfaces__action__ArmControlServer_Result;

// Struct for a sequence of smrr_interfaces__action__ArmControlServer_Result.
typedef struct smrr_interfaces__action__ArmControlServer_Result__Sequence
{
  smrr_interfaces__action__ArmControlServer_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__action__ArmControlServer_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_joints_angles'
// already included above
// #include "std_msgs/msg/detail/float64_multi_array__struct.h"

/// Struct defined in action/ArmControlServer in the package smrr_interfaces.
typedef struct smrr_interfaces__action__ArmControlServer_Feedback
{
  std_msgs__msg__Float64MultiArray current_joints_angles;
} smrr_interfaces__action__ArmControlServer_Feedback;

// Struct for a sequence of smrr_interfaces__action__ArmControlServer_Feedback.
typedef struct smrr_interfaces__action__ArmControlServer_Feedback__Sequence
{
  smrr_interfaces__action__ArmControlServer_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__action__ArmControlServer_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "smrr_interfaces/action/detail/arm_control_server__struct.h"

/// Struct defined in action/ArmControlServer in the package smrr_interfaces.
typedef struct smrr_interfaces__action__ArmControlServer_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  smrr_interfaces__action__ArmControlServer_Goal goal;
} smrr_interfaces__action__ArmControlServer_SendGoal_Request;

// Struct for a sequence of smrr_interfaces__action__ArmControlServer_SendGoal_Request.
typedef struct smrr_interfaces__action__ArmControlServer_SendGoal_Request__Sequence
{
  smrr_interfaces__action__ArmControlServer_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__action__ArmControlServer_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ArmControlServer in the package smrr_interfaces.
typedef struct smrr_interfaces__action__ArmControlServer_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} smrr_interfaces__action__ArmControlServer_SendGoal_Response;

// Struct for a sequence of smrr_interfaces__action__ArmControlServer_SendGoal_Response.
typedef struct smrr_interfaces__action__ArmControlServer_SendGoal_Response__Sequence
{
  smrr_interfaces__action__ArmControlServer_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__action__ArmControlServer_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ArmControlServer in the package smrr_interfaces.
typedef struct smrr_interfaces__action__ArmControlServer_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} smrr_interfaces__action__ArmControlServer_GetResult_Request;

// Struct for a sequence of smrr_interfaces__action__ArmControlServer_GetResult_Request.
typedef struct smrr_interfaces__action__ArmControlServer_GetResult_Request__Sequence
{
  smrr_interfaces__action__ArmControlServer_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__action__ArmControlServer_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "smrr_interfaces/action/detail/arm_control_server__struct.h"

/// Struct defined in action/ArmControlServer in the package smrr_interfaces.
typedef struct smrr_interfaces__action__ArmControlServer_GetResult_Response
{
  int8_t status;
  smrr_interfaces__action__ArmControlServer_Result result;
} smrr_interfaces__action__ArmControlServer_GetResult_Response;

// Struct for a sequence of smrr_interfaces__action__ArmControlServer_GetResult_Response.
typedef struct smrr_interfaces__action__ArmControlServer_GetResult_Response__Sequence
{
  smrr_interfaces__action__ArmControlServer_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__action__ArmControlServer_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "smrr_interfaces/action/detail/arm_control_server__struct.h"

/// Struct defined in action/ArmControlServer in the package smrr_interfaces.
typedef struct smrr_interfaces__action__ArmControlServer_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  smrr_interfaces__action__ArmControlServer_Feedback feedback;
} smrr_interfaces__action__ArmControlServer_FeedbackMessage;

// Struct for a sequence of smrr_interfaces__action__ArmControlServer_FeedbackMessage.
typedef struct smrr_interfaces__action__ArmControlServer_FeedbackMessage__Sequence
{
  smrr_interfaces__action__ArmControlServer_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__action__ArmControlServer_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__ACTION__DETAIL__ARM_CONTROL_SERVER__STRUCT_H_
