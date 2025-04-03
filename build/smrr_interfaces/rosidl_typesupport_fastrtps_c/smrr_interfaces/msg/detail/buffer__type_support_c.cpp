// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from smrr_interfaces:msg/Buffer.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/buffer__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "smrr_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "smrr_interfaces/msg/detail/buffer__struct.h"
#include "smrr_interfaces/msg/detail/buffer__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // agent_ids, x_mean, x_std_dev, x_variance, y_mean, y_std_dev, y_variance
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // agent_ids, x_mean, x_std_dev, x_variance, y_mean, y_std_dev, y_variance
#include "rosidl_runtime_c/string.h"  // majority_class_id
#include "rosidl_runtime_c/string_functions.h"  // majority_class_id
#include "smrr_interfaces/msg/detail/data_element_float__functions.h"  // x_positions, x_velocities, y_positions, y_velocities
#include "smrr_interfaces/msg/detail/data_element_string__functions.h"  // class_ids

// forward declare type support functions
size_t get_serialized_size_smrr_interfaces__msg__DataElementFloat(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_smrr_interfaces__msg__DataElementFloat(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementFloat)();
size_t get_serialized_size_smrr_interfaces__msg__DataElementString(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_smrr_interfaces__msg__DataElementString(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementString)();


using _Buffer__ros_msg_type = smrr_interfaces__msg__Buffer;

static bool _Buffer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Buffer__ros_msg_type * ros_message = static_cast<const _Buffer__ros_msg_type *>(untyped_ros_message);
  // Field name: agent_ids
  {
    size_t size = ros_message->agent_ids.size;
    auto array_ptr = ros_message->agent_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: agent_count
  {
    cdr << ros_message->agent_count;
  }

  // Field name: x_velocities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementFloat
      )()->data);
    size_t size = ros_message->x_velocities.size;
    auto array_ptr = ros_message->x_velocities.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: y_velocities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementFloat
      )()->data);
    size_t size = ros_message->y_velocities.size;
    auto array_ptr = ros_message->y_velocities.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: class_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementString
      )()->data);
    size_t size = ros_message->class_ids.size;
    auto array_ptr = ros_message->class_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: x_positions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementFloat
      )()->data);
    size_t size = ros_message->x_positions.size;
    auto array_ptr = ros_message->x_positions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: y_positions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementFloat
      )()->data);
    size_t size = ros_message->y_positions.size;
    auto array_ptr = ros_message->y_positions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: x_mean
  {
    size_t size = ros_message->x_mean.size;
    auto array_ptr = ros_message->x_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y_mean
  {
    size_t size = ros_message->y_mean.size;
    auto array_ptr = ros_message->y_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: x_std_dev
  {
    size_t size = ros_message->x_std_dev.size;
    auto array_ptr = ros_message->x_std_dev.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y_std_dev
  {
    size_t size = ros_message->y_std_dev.size;
    auto array_ptr = ros_message->y_std_dev.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: x_variance
  {
    size_t size = ros_message->x_variance.size;
    auto array_ptr = ros_message->x_variance.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y_variance
  {
    size_t size = ros_message->y_variance.size;
    auto array_ptr = ros_message->y_variance.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: majority_class_id
  {
    size_t size = ros_message->majority_class_id.size;
    auto array_ptr = ros_message->majority_class_id.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _Buffer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Buffer__ros_msg_type * ros_message = static_cast<_Buffer__ros_msg_type *>(untyped_ros_message);
  // Field name: agent_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->agent_ids.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->agent_ids);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->agent_ids, size)) {
      fprintf(stderr, "failed to create array for field 'agent_ids'");
      return false;
    }
    auto array_ptr = ros_message->agent_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: agent_count
  {
    cdr >> ros_message->agent_count;
  }

  // Field name: x_velocities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementFloat
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_velocities.data) {
      smrr_interfaces__msg__DataElementFloat__Sequence__fini(&ros_message->x_velocities);
    }
    if (!smrr_interfaces__msg__DataElementFloat__Sequence__init(&ros_message->x_velocities, size)) {
      fprintf(stderr, "failed to create array for field 'x_velocities'");
      return false;
    }
    auto array_ptr = ros_message->x_velocities.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: y_velocities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementFloat
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_velocities.data) {
      smrr_interfaces__msg__DataElementFloat__Sequence__fini(&ros_message->y_velocities);
    }
    if (!smrr_interfaces__msg__DataElementFloat__Sequence__init(&ros_message->y_velocities, size)) {
      fprintf(stderr, "failed to create array for field 'y_velocities'");
      return false;
    }
    auto array_ptr = ros_message->y_velocities.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: class_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementString
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->class_ids.data) {
      smrr_interfaces__msg__DataElementString__Sequence__fini(&ros_message->class_ids);
    }
    if (!smrr_interfaces__msg__DataElementString__Sequence__init(&ros_message->class_ids, size)) {
      fprintf(stderr, "failed to create array for field 'class_ids'");
      return false;
    }
    auto array_ptr = ros_message->class_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: x_positions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementFloat
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_positions.data) {
      smrr_interfaces__msg__DataElementFloat__Sequence__fini(&ros_message->x_positions);
    }
    if (!smrr_interfaces__msg__DataElementFloat__Sequence__init(&ros_message->x_positions, size)) {
      fprintf(stderr, "failed to create array for field 'x_positions'");
      return false;
    }
    auto array_ptr = ros_message->x_positions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: y_positions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementFloat
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_positions.data) {
      smrr_interfaces__msg__DataElementFloat__Sequence__fini(&ros_message->y_positions);
    }
    if (!smrr_interfaces__msg__DataElementFloat__Sequence__init(&ros_message->y_positions, size)) {
      fprintf(stderr, "failed to create array for field 'y_positions'");
      return false;
    }
    auto array_ptr = ros_message->y_positions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: x_mean
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_mean.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->x_mean);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->x_mean, size)) {
      fprintf(stderr, "failed to create array for field 'x_mean'");
      return false;
    }
    auto array_ptr = ros_message->x_mean.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y_mean
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_mean.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->y_mean);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->y_mean, size)) {
      fprintf(stderr, "failed to create array for field 'y_mean'");
      return false;
    }
    auto array_ptr = ros_message->y_mean.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: x_std_dev
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_std_dev.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->x_std_dev);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->x_std_dev, size)) {
      fprintf(stderr, "failed to create array for field 'x_std_dev'");
      return false;
    }
    auto array_ptr = ros_message->x_std_dev.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y_std_dev
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_std_dev.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->y_std_dev);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->y_std_dev, size)) {
      fprintf(stderr, "failed to create array for field 'y_std_dev'");
      return false;
    }
    auto array_ptr = ros_message->y_std_dev.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: x_variance
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_variance.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->x_variance);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->x_variance, size)) {
      fprintf(stderr, "failed to create array for field 'x_variance'");
      return false;
    }
    auto array_ptr = ros_message->x_variance.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y_variance
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_variance.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->y_variance);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->y_variance, size)) {
      fprintf(stderr, "failed to create array for field 'y_variance'");
      return false;
    }
    auto array_ptr = ros_message->y_variance.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: majority_class_id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->majority_class_id.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->majority_class_id);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->majority_class_id, size)) {
      fprintf(stderr, "failed to create array for field 'majority_class_id'");
      return false;
    }
    auto array_ptr = ros_message->majority_class_id.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'majority_class_id'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smrr_interfaces
size_t get_serialized_size_smrr_interfaces__msg__Buffer(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Buffer__ros_msg_type * ros_message = static_cast<const _Buffer__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name agent_ids
  {
    size_t array_size = ros_message->agent_ids.size;
    auto array_ptr = ros_message->agent_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agent_count
  {
    size_t item_size = sizeof(ros_message->agent_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_velocities
  {
    size_t array_size = ros_message->x_velocities.size;
    auto array_ptr = ros_message->x_velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_smrr_interfaces__msg__DataElementFloat(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name y_velocities
  {
    size_t array_size = ros_message->y_velocities.size;
    auto array_ptr = ros_message->y_velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_smrr_interfaces__msg__DataElementFloat(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name class_ids
  {
    size_t array_size = ros_message->class_ids.size;
    auto array_ptr = ros_message->class_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_smrr_interfaces__msg__DataElementString(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name x_positions
  {
    size_t array_size = ros_message->x_positions.size;
    auto array_ptr = ros_message->x_positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_smrr_interfaces__msg__DataElementFloat(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name y_positions
  {
    size_t array_size = ros_message->y_positions.size;
    auto array_ptr = ros_message->y_positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_smrr_interfaces__msg__DataElementFloat(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name x_mean
  {
    size_t array_size = ros_message->x_mean.size;
    auto array_ptr = ros_message->x_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_mean
  {
    size_t array_size = ros_message->y_mean.size;
    auto array_ptr = ros_message->y_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_std_dev
  {
    size_t array_size = ros_message->x_std_dev.size;
    auto array_ptr = ros_message->x_std_dev.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_std_dev
  {
    size_t array_size = ros_message->y_std_dev.size;
    auto array_ptr = ros_message->y_std_dev.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_variance
  {
    size_t array_size = ros_message->x_variance.size;
    auto array_ptr = ros_message->x_variance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_variance
  {
    size_t array_size = ros_message->y_variance.size;
    auto array_ptr = ros_message->y_variance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name majority_class_id
  {
    size_t array_size = ros_message->majority_class_id.size;
    auto array_ptr = ros_message->majority_class_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Buffer__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_smrr_interfaces__msg__Buffer(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smrr_interfaces
size_t max_serialized_size_smrr_interfaces__msg__Buffer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: agent_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: agent_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: x_velocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_smrr_interfaces__msg__DataElementFloat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: y_velocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_smrr_interfaces__msg__DataElementFloat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: class_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_smrr_interfaces__msg__DataElementString(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: x_positions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_smrr_interfaces__msg__DataElementFloat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: y_positions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_smrr_interfaces__msg__DataElementFloat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: x_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_std_dev
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_std_dev
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_variance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_variance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: majority_class_id
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = smrr_interfaces__msg__Buffer;
    is_plain =
      (
      offsetof(DataType, majority_class_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Buffer__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_smrr_interfaces__msg__Buffer(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Buffer = {
  "smrr_interfaces::msg",
  "Buffer",
  _Buffer__cdr_serialize,
  _Buffer__cdr_deserialize,
  _Buffer__get_serialized_size,
  _Buffer__max_serialized_size
};

static rosidl_message_type_support_t _Buffer__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Buffer,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, Buffer)() {
  return &_Buffer__type_support;
}

#if defined(__cplusplus)
}
#endif
