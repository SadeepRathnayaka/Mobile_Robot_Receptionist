// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smrr_interfaces:msg/Yolov10Inference.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smrr_interfaces/msg/detail/yolov10_inference__rosidl_typesupport_introspection_c.h"
#include "smrr_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smrr_interfaces/msg/detail/yolov10_inference__functions.h"
#include "smrr_interfaces/msg/detail/yolov10_inference__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `yolov10_inference`
#include "smrr_interfaces/msg/inference_result.h"
// Member `yolov10_inference`
#include "smrr_interfaces/msg/detail/inference_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smrr_interfaces__msg__Yolov10Inference__init(message_memory);
}

void smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_fini_function(void * message_memory)
{
  smrr_interfaces__msg__Yolov10Inference__fini(message_memory);
}

size_t smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__size_function__Yolov10Inference__yolov10_inference(
  const void * untyped_member)
{
  const smrr_interfaces__msg__InferenceResult__Sequence * member =
    (const smrr_interfaces__msg__InferenceResult__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__get_const_function__Yolov10Inference__yolov10_inference(
  const void * untyped_member, size_t index)
{
  const smrr_interfaces__msg__InferenceResult__Sequence * member =
    (const smrr_interfaces__msg__InferenceResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__get_function__Yolov10Inference__yolov10_inference(
  void * untyped_member, size_t index)
{
  smrr_interfaces__msg__InferenceResult__Sequence * member =
    (smrr_interfaces__msg__InferenceResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__fetch_function__Yolov10Inference__yolov10_inference(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const smrr_interfaces__msg__InferenceResult * item =
    ((const smrr_interfaces__msg__InferenceResult *)
    smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__get_const_function__Yolov10Inference__yolov10_inference(untyped_member, index));
  smrr_interfaces__msg__InferenceResult * value =
    (smrr_interfaces__msg__InferenceResult *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__assign_function__Yolov10Inference__yolov10_inference(
  void * untyped_member, size_t index, const void * untyped_value)
{
  smrr_interfaces__msg__InferenceResult * item =
    ((smrr_interfaces__msg__InferenceResult *)
    smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__get_function__Yolov10Inference__yolov10_inference(untyped_member, index));
  const smrr_interfaces__msg__InferenceResult * value =
    (const smrr_interfaces__msg__InferenceResult *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__resize_function__Yolov10Inference__yolov10_inference(
  void * untyped_member, size_t size)
{
  smrr_interfaces__msg__InferenceResult__Sequence * member =
    (smrr_interfaces__msg__InferenceResult__Sequence *)(untyped_member);
  smrr_interfaces__msg__InferenceResult__Sequence__fini(member);
  return smrr_interfaces__msg__InferenceResult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Yolov10Inference, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yolov10_inference",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Yolov10Inference, yolov10_inference),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__size_function__Yolov10Inference__yolov10_inference,  // size() function pointer
    smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__get_const_function__Yolov10Inference__yolov10_inference,  // get_const(index) function pointer
    smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__get_function__Yolov10Inference__yolov10_inference,  // get(index) function pointer
    smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__fetch_function__Yolov10Inference__yolov10_inference,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__assign_function__Yolov10Inference__yolov10_inference,  // assign(index, value) function pointer
    smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__resize_function__Yolov10Inference__yolov10_inference  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_members = {
  "smrr_interfaces__msg",  // message namespace
  "Yolov10Inference",  // message name
  2,  // number of fields
  sizeof(smrr_interfaces__msg__Yolov10Inference),
  smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_member_array,  // message members
  smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_init_function,  // function to initialize message memory (memory has to be allocated)
  smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_type_support_handle = {
  0,
  &smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smrr_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, Yolov10Inference)() {
  smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, InferenceResult)();
  if (!smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_type_support_handle.typesupport_identifier) {
    smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smrr_interfaces__msg__Yolov10Inference__rosidl_typesupport_introspection_c__Yolov10Inference_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
