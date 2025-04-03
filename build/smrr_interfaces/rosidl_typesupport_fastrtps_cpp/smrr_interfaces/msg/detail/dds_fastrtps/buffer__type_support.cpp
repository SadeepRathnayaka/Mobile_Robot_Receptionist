// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from smrr_interfaces:msg/Buffer.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/buffer__rosidl_typesupport_fastrtps_cpp.hpp"
#include "smrr_interfaces/msg/detail/buffer__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace smrr_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const smrr_interfaces::msg::DataElementFloat &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  smrr_interfaces::msg::DataElementFloat &);
size_t get_serialized_size(
  const smrr_interfaces::msg::DataElementFloat &,
  size_t current_alignment);
size_t
max_serialized_size_DataElementFloat(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace smrr_interfaces

// functions for smrr_interfaces::msg::DataElementFloat already declared above

namespace smrr_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const smrr_interfaces::msg::DataElementString &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  smrr_interfaces::msg::DataElementString &);
size_t get_serialized_size(
  const smrr_interfaces::msg::DataElementString &,
  size_t current_alignment);
size_t
max_serialized_size_DataElementString(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace smrr_interfaces

// functions for smrr_interfaces::msg::DataElementFloat already declared above

// functions for smrr_interfaces::msg::DataElementFloat already declared above


namespace smrr_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_smrr_interfaces
cdr_serialize(
  const smrr_interfaces::msg::Buffer & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: agent_ids
  {
    cdr << ros_message.agent_ids;
  }
  // Member: agent_count
  cdr << ros_message.agent_count;
  // Member: x_velocities
  {
    size_t size = ros_message.x_velocities.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.x_velocities[i],
        cdr);
    }
  }
  // Member: y_velocities
  {
    size_t size = ros_message.y_velocities.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.y_velocities[i],
        cdr);
    }
  }
  // Member: class_ids
  {
    size_t size = ros_message.class_ids.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.class_ids[i],
        cdr);
    }
  }
  // Member: x_positions
  {
    size_t size = ros_message.x_positions.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.x_positions[i],
        cdr);
    }
  }
  // Member: y_positions
  {
    size_t size = ros_message.y_positions.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.y_positions[i],
        cdr);
    }
  }
  // Member: x_mean
  {
    cdr << ros_message.x_mean;
  }
  // Member: y_mean
  {
    cdr << ros_message.y_mean;
  }
  // Member: x_std_dev
  {
    cdr << ros_message.x_std_dev;
  }
  // Member: y_std_dev
  {
    cdr << ros_message.y_std_dev;
  }
  // Member: x_variance
  {
    cdr << ros_message.x_variance;
  }
  // Member: y_variance
  {
    cdr << ros_message.y_variance;
  }
  // Member: majority_class_id
  {
    cdr << ros_message.majority_class_id;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_smrr_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  smrr_interfaces::msg::Buffer & ros_message)
{
  // Member: agent_ids
  {
    cdr >> ros_message.agent_ids;
  }

  // Member: agent_count
  cdr >> ros_message.agent_count;

  // Member: x_velocities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.x_velocities.resize(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.x_velocities[i]);
    }
  }

  // Member: y_velocities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.y_velocities.resize(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.y_velocities[i]);
    }
  }

  // Member: class_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.class_ids.resize(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.class_ids[i]);
    }
  }

  // Member: x_positions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.x_positions.resize(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.x_positions[i]);
    }
  }

  // Member: y_positions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.y_positions.resize(size);
    for (size_t i = 0; i < size; i++) {
      smrr_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.y_positions[i]);
    }
  }

  // Member: x_mean
  {
    cdr >> ros_message.x_mean;
  }

  // Member: y_mean
  {
    cdr >> ros_message.y_mean;
  }

  // Member: x_std_dev
  {
    cdr >> ros_message.x_std_dev;
  }

  // Member: y_std_dev
  {
    cdr >> ros_message.y_std_dev;
  }

  // Member: x_variance
  {
    cdr >> ros_message.x_variance;
  }

  // Member: y_variance
  {
    cdr >> ros_message.y_variance;
  }

  // Member: majority_class_id
  {
    cdr >> ros_message.majority_class_id;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_smrr_interfaces
get_serialized_size(
  const smrr_interfaces::msg::Buffer & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: agent_ids
  {
    size_t array_size = ros_message.agent_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.agent_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: agent_count
  {
    size_t item_size = sizeof(ros_message.agent_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_velocities
  {
    size_t array_size = ros_message.x_velocities.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        smrr_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.x_velocities[index], current_alignment);
    }
  }
  // Member: y_velocities
  {
    size_t array_size = ros_message.y_velocities.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        smrr_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.y_velocities[index], current_alignment);
    }
  }
  // Member: class_ids
  {
    size_t array_size = ros_message.class_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        smrr_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.class_ids[index], current_alignment);
    }
  }
  // Member: x_positions
  {
    size_t array_size = ros_message.x_positions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        smrr_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.x_positions[index], current_alignment);
    }
  }
  // Member: y_positions
  {
    size_t array_size = ros_message.y_positions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        smrr_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.y_positions[index], current_alignment);
    }
  }
  // Member: x_mean
  {
    size_t array_size = ros_message.x_mean.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.x_mean[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_mean
  {
    size_t array_size = ros_message.y_mean.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.y_mean[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_std_dev
  {
    size_t array_size = ros_message.x_std_dev.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.x_std_dev[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_std_dev
  {
    size_t array_size = ros_message.y_std_dev.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.y_std_dev[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_variance
  {
    size_t array_size = ros_message.x_variance.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.x_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_variance
  {
    size_t array_size = ros_message.y_variance.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.y_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: majority_class_id
  {
    size_t array_size = ros_message.majority_class_id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.majority_class_id[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_smrr_interfaces
max_serialized_size_Buffer(
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


  // Member: agent_ids
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

  // Member: agent_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: x_velocities
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
      size_t inner_size =
        smrr_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_DataElementFloat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: y_velocities
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
      size_t inner_size =
        smrr_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_DataElementFloat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: class_ids
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
      size_t inner_size =
        smrr_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_DataElementString(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: x_positions
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
      size_t inner_size =
        smrr_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_DataElementFloat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: y_positions
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
      size_t inner_size =
        smrr_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_DataElementFloat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: x_mean
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

  // Member: y_mean
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

  // Member: x_std_dev
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

  // Member: y_std_dev
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

  // Member: x_variance
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

  // Member: y_variance
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

  // Member: majority_class_id
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
    using DataType = smrr_interfaces::msg::Buffer;
    is_plain =
      (
      offsetof(DataType, majority_class_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Buffer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const smrr_interfaces::msg::Buffer *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Buffer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<smrr_interfaces::msg::Buffer *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Buffer__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const smrr_interfaces::msg::Buffer *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Buffer__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Buffer(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Buffer__callbacks = {
  "smrr_interfaces::msg",
  "Buffer",
  _Buffer__cdr_serialize,
  _Buffer__cdr_deserialize,
  _Buffer__get_serialized_size,
  _Buffer__max_serialized_size
};

static rosidl_message_type_support_t _Buffer__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Buffer__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace smrr_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_smrr_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<smrr_interfaces::msg::Buffer>()
{
  return &smrr_interfaces::msg::typesupport_fastrtps_cpp::_Buffer__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, smrr_interfaces, msg, Buffer)() {
  return &smrr_interfaces::msg::typesupport_fastrtps_cpp::_Buffer__handle;
}

#ifdef __cplusplus
}
#endif
