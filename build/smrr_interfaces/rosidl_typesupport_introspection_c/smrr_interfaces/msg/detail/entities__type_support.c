// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smrr_interfaces:msg/Entities.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smrr_interfaces/msg/detail/entities__rosidl_typesupport_introspection_c.h"
#include "smrr_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smrr_interfaces/msg/detail/entities__functions.h"
#include "smrr_interfaces/msg/detail/entities__struct.h"


// Include directives for member types
// Member `classes`
#include "rosidl_runtime_c/string_functions.h"
// Member `x`
// Member `y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smrr_interfaces__msg__Entities__init(message_memory);
}

void smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_fini_function(void * message_memory)
{
  smrr_interfaces__msg__Entities__fini(message_memory);
}

size_t smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__size_function__Entities__classes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_const_function__Entities__classes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_function__Entities__classes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__fetch_function__Entities__classes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_const_function__Entities__classes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__assign_function__Entities__classes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_function__Entities__classes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__resize_function__Entities__classes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__size_function__Entities__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_const_function__Entities__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_function__Entities__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__fetch_function__Entities__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_const_function__Entities__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__assign_function__Entities__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_function__Entities__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__resize_function__Entities__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__size_function__Entities__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_const_function__Entities__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_function__Entities__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__fetch_function__Entities__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_const_function__Entities__y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__assign_function__Entities__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_function__Entities__y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__resize_function__Entities__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_message_member_array[4] = {
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Entities, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Entities, classes),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__size_function__Entities__classes,  // size() function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_const_function__Entities__classes,  // get_const(index) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_function__Entities__classes,  // get(index) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__fetch_function__Entities__classes,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__assign_function__Entities__classes,  // assign(index, value) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__resize_function__Entities__classes  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Entities, x),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__size_function__Entities__x,  // size() function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_const_function__Entities__x,  // get_const(index) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_function__Entities__x,  // get(index) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__fetch_function__Entities__x,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__assign_function__Entities__x,  // assign(index, value) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__resize_function__Entities__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Entities, y),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__size_function__Entities__y,  // size() function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_const_function__Entities__y,  // get_const(index) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__get_function__Entities__y,  // get(index) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__fetch_function__Entities__y,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__assign_function__Entities__y,  // assign(index, value) function pointer
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__resize_function__Entities__y  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_message_members = {
  "smrr_interfaces__msg",  // message namespace
  "Entities",  // message name
  4,  // number of fields
  sizeof(smrr_interfaces__msg__Entities),
  smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_message_member_array,  // message members
  smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_init_function,  // function to initialize message memory (memory has to be allocated)
  smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_message_type_support_handle = {
  0,
  &smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smrr_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, Entities)() {
  if (!smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_message_type_support_handle.typesupport_identifier) {
    smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smrr_interfaces__msg__Entities__rosidl_typesupport_introspection_c__Entities_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
