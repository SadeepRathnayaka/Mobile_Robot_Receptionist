// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smrr_interfaces:msg/PrefVelocity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smrr_interfaces/msg/detail/pref_velocity__rosidl_typesupport_introspection_c.h"
#include "smrr_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smrr_interfaces/msg/detail/pref_velocity__functions.h"
#include "smrr_interfaces/msg/detail/pref_velocity__struct.h"


// Include directives for member types
// Member `agent_ids`
// Member `preferred_velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `class_ids`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smrr_interfaces__msg__PrefVelocity__init(message_memory);
}

void smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_fini_function(void * message_memory)
{
  smrr_interfaces__msg__PrefVelocity__fini(message_memory);
}

size_t smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__size_function__PrefVelocity__agent_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_const_function__PrefVelocity__agent_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_function__PrefVelocity__agent_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__fetch_function__PrefVelocity__agent_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_const_function__PrefVelocity__agent_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__assign_function__PrefVelocity__agent_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_function__PrefVelocity__agent_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__resize_function__PrefVelocity__agent_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__size_function__PrefVelocity__class_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_const_function__PrefVelocity__class_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_function__PrefVelocity__class_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__fetch_function__PrefVelocity__class_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_const_function__PrefVelocity__class_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__assign_function__PrefVelocity__class_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_function__PrefVelocity__class_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__resize_function__PrefVelocity__class_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__size_function__PrefVelocity__preferred_velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_const_function__PrefVelocity__preferred_velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_function__PrefVelocity__preferred_velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__fetch_function__PrefVelocity__preferred_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_const_function__PrefVelocity__preferred_velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__assign_function__PrefVelocity__preferred_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_function__PrefVelocity__preferred_velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__resize_function__PrefVelocity__preferred_velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_message_member_array[3] = {
  {
    "agent_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__PrefVelocity, agent_ids),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__size_function__PrefVelocity__agent_ids,  // size() function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_const_function__PrefVelocity__agent_ids,  // get_const(index) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_function__PrefVelocity__agent_ids,  // get(index) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__fetch_function__PrefVelocity__agent_ids,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__assign_function__PrefVelocity__agent_ids,  // assign(index, value) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__resize_function__PrefVelocity__agent_ids  // resize(index) function pointer
  },
  {
    "class_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__PrefVelocity, class_ids),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__size_function__PrefVelocity__class_ids,  // size() function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_const_function__PrefVelocity__class_ids,  // get_const(index) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_function__PrefVelocity__class_ids,  // get(index) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__fetch_function__PrefVelocity__class_ids,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__assign_function__PrefVelocity__class_ids,  // assign(index, value) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__resize_function__PrefVelocity__class_ids  // resize(index) function pointer
  },
  {
    "preferred_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__PrefVelocity, preferred_velocities),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__size_function__PrefVelocity__preferred_velocities,  // size() function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_const_function__PrefVelocity__preferred_velocities,  // get_const(index) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__get_function__PrefVelocity__preferred_velocities,  // get(index) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__fetch_function__PrefVelocity__preferred_velocities,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__assign_function__PrefVelocity__preferred_velocities,  // assign(index, value) function pointer
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__resize_function__PrefVelocity__preferred_velocities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_message_members = {
  "smrr_interfaces__msg",  // message namespace
  "PrefVelocity",  // message name
  3,  // number of fields
  sizeof(smrr_interfaces__msg__PrefVelocity),
  smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_message_member_array,  // message members
  smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_init_function,  // function to initialize message memory (memory has to be allocated)
  smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_message_type_support_handle = {
  0,
  &smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smrr_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, PrefVelocity)() {
  if (!smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_message_type_support_handle.typesupport_identifier) {
    smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smrr_interfaces__msg__PrefVelocity__rosidl_typesupport_introspection_c__PrefVelocity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
