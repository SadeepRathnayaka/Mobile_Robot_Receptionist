// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from smrr_interfaces:msg/VelocityClassData.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/velocity_class_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "smrr_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "smrr_interfaces/msg/detail/velocity_class_data__struct.h"
#include "smrr_interfaces/msg/detail/velocity_class_data__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // x_positions, x_velocities, y_positions, y_velocities
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // x_positions, x_velocities, y_positions, y_velocities
#include "rosidl_runtime_c/string.h"  // class_ids
#include "rosidl_runtime_c/string_functions.h"  // class_ids

// forward declare type support functions


using _VelocityClassData__ros_msg_type = smrr_interfaces__msg__VelocityClassData;

static bool _VelocityClassData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VelocityClassData__ros_msg_type * ros_message = static_cast<const _VelocityClassData__ros_msg_type *>(untyped_ros_message);
  // Field name: class_ids
  {
    size_t size = ros_message->class_ids.size;
    auto array_ptr = ros_message->class_ids.data;
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

  // Field name: x_velocities
  {
    size_t size = ros_message->x_velocities.size;
    auto array_ptr = ros_message->x_velocities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y_velocities
  {
    size_t size = ros_message->y_velocities.size;
    auto array_ptr = ros_message->y_velocities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: x_positions
  {
    size_t size = ros_message->x_positions.size;
    auto array_ptr = ros_message->x_positions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y_positions
  {
    size_t size = ros_message->y_positions.size;
    auto array_ptr = ros_message->y_positions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _VelocityClassData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VelocityClassData__ros_msg_type * ros_message = static_cast<_VelocityClassData__ros_msg_type *>(untyped_ros_message);
  // Field name: class_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->class_ids.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->class_ids);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->class_ids, size)) {
      fprintf(stderr, "failed to create array for field 'class_ids'");
      return false;
    }
    auto array_ptr = ros_message->class_ids.data;
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
        fprintf(stderr, "failed to assign string into field 'class_ids'\n");
        return false;
      }
    }
  }

  // Field name: x_velocities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_velocities.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->x_velocities);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->x_velocities, size)) {
      fprintf(stderr, "failed to create array for field 'x_velocities'");
      return false;
    }
    auto array_ptr = ros_message->x_velocities.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y_velocities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_velocities.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->y_velocities);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->y_velocities, size)) {
      fprintf(stderr, "failed to create array for field 'y_velocities'");
      return false;
    }
    auto array_ptr = ros_message->y_velocities.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: x_positions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_positions.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->x_positions);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->x_positions, size)) {
      fprintf(stderr, "failed to create array for field 'x_positions'");
      return false;
    }
    auto array_ptr = ros_message->x_positions.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y_positions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_positions.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->y_positions);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->y_positions, size)) {
      fprintf(stderr, "failed to create array for field 'y_positions'");
      return false;
    }
    auto array_ptr = ros_message->y_positions.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smrr_interfaces
size_t get_serialized_size_smrr_interfaces__msg__VelocityClassData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VelocityClassData__ros_msg_type * ros_message = static_cast<const _VelocityClassData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name class_ids
  {
    size_t array_size = ros_message->class_ids.size;
    auto array_ptr = ros_message->class_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name x_velocities
  {
    size_t array_size = ros_message->x_velocities.size;
    auto array_ptr = ros_message->x_velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_velocities
  {
    size_t array_size = ros_message->y_velocities.size;
    auto array_ptr = ros_message->y_velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_positions
  {
    size_t array_size = ros_message->x_positions.size;
    auto array_ptr = ros_message->x_positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_positions
  {
    size_t array_size = ros_message->y_positions.size;
    auto array_ptr = ros_message->y_positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VelocityClassData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_smrr_interfaces__msg__VelocityClassData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smrr_interfaces
size_t max_serialized_size_smrr_interfaces__msg__VelocityClassData(
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

  // member: class_ids
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
  // member: x_velocities
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
  // member: y_velocities
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
  // member: x_positions
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
  // member: y_positions
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = smrr_interfaces__msg__VelocityClassData;
    is_plain =
      (
      offsetof(DataType, y_positions) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VelocityClassData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_smrr_interfaces__msg__VelocityClassData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VelocityClassData = {
  "smrr_interfaces::msg",
  "VelocityClassData",
  _VelocityClassData__cdr_serialize,
  _VelocityClassData__cdr_deserialize,
  _VelocityClassData__get_serialized_size,
  _VelocityClassData__max_serialized_size
};

static rosidl_message_type_support_t _VelocityClassData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VelocityClassData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, VelocityClassData)() {
  return &_VelocityClassData__type_support;
}

#if defined(__cplusplus)
}
#endif
