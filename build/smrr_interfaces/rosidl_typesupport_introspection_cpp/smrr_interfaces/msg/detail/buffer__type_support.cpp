// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from smrr_interfaces:msg/Buffer.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "smrr_interfaces/msg/detail/buffer__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace smrr_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Buffer_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) smrr_interfaces::msg::Buffer(_init);
}

void Buffer_fini_function(void * message_memory)
{
  auto typed_message = static_cast<smrr_interfaces::msg::Buffer *>(message_memory);
  typed_message->~Buffer();
}

size_t size_function__Buffer__agent_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__agent_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__agent_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__agent_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Buffer__agent_ids(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Buffer__agent_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Buffer__agent_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__Buffer__agent_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__x_velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__x_velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__x_velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__x_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const smrr_interfaces::msg::DataElementFloat *>(
    get_const_function__Buffer__x_velocities(untyped_member, index));
  auto & value = *reinterpret_cast<smrr_interfaces::msg::DataElementFloat *>(untyped_value);
  value = item;
}

void assign_function__Buffer__x_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<smrr_interfaces::msg::DataElementFloat *>(
    get_function__Buffer__x_velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const smrr_interfaces::msg::DataElementFloat *>(untyped_value);
  item = value;
}

void resize_function__Buffer__x_velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__y_velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__y_velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__y_velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__y_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const smrr_interfaces::msg::DataElementFloat *>(
    get_const_function__Buffer__y_velocities(untyped_member, index));
  auto & value = *reinterpret_cast<smrr_interfaces::msg::DataElementFloat *>(untyped_value);
  value = item;
}

void assign_function__Buffer__y_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<smrr_interfaces::msg::DataElementFloat *>(
    get_function__Buffer__y_velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const smrr_interfaces::msg::DataElementFloat *>(untyped_value);
  item = value;
}

void resize_function__Buffer__y_velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__class_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementString> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__class_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementString> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__class_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementString> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__class_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const smrr_interfaces::msg::DataElementString *>(
    get_const_function__Buffer__class_ids(untyped_member, index));
  auto & value = *reinterpret_cast<smrr_interfaces::msg::DataElementString *>(untyped_value);
  value = item;
}

void assign_function__Buffer__class_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<smrr_interfaces::msg::DataElementString *>(
    get_function__Buffer__class_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const smrr_interfaces::msg::DataElementString *>(untyped_value);
  item = value;
}

void resize_function__Buffer__class_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementString> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__x_positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__x_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__x_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__x_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const smrr_interfaces::msg::DataElementFloat *>(
    get_const_function__Buffer__x_positions(untyped_member, index));
  auto & value = *reinterpret_cast<smrr_interfaces::msg::DataElementFloat *>(untyped_value);
  value = item;
}

void assign_function__Buffer__x_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<smrr_interfaces::msg::DataElementFloat *>(
    get_function__Buffer__x_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const smrr_interfaces::msg::DataElementFloat *>(untyped_value);
  item = value;
}

void resize_function__Buffer__x_positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__y_positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__y_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__y_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__y_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const smrr_interfaces::msg::DataElementFloat *>(
    get_const_function__Buffer__y_positions(untyped_member, index));
  auto & value = *reinterpret_cast<smrr_interfaces::msg::DataElementFloat *>(untyped_value);
  value = item;
}

void assign_function__Buffer__y_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<smrr_interfaces::msg::DataElementFloat *>(
    get_function__Buffer__y_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const smrr_interfaces::msg::DataElementFloat *>(untyped_value);
  item = value;
}

void resize_function__Buffer__y_positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<smrr_interfaces::msg::DataElementFloat> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__x_mean(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__x_mean(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__x_mean(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__x_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Buffer__x_mean(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Buffer__x_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Buffer__x_mean(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Buffer__x_mean(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__y_mean(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__y_mean(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__y_mean(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__y_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Buffer__y_mean(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Buffer__y_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Buffer__y_mean(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Buffer__y_mean(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__x_std_dev(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__x_std_dev(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__x_std_dev(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__x_std_dev(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Buffer__x_std_dev(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Buffer__x_std_dev(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Buffer__x_std_dev(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Buffer__x_std_dev(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__y_std_dev(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__y_std_dev(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__y_std_dev(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__y_std_dev(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Buffer__y_std_dev(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Buffer__y_std_dev(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Buffer__y_std_dev(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Buffer__y_std_dev(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__x_variance(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__x_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__x_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__x_variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Buffer__x_variance(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Buffer__x_variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Buffer__x_variance(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Buffer__x_variance(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__y_variance(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__y_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__y_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__y_variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Buffer__y_variance(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Buffer__y_variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Buffer__y_variance(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Buffer__y_variance(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Buffer__majority_class_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buffer__majority_class_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Buffer__majority_class_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Buffer__majority_class_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Buffer__majority_class_id(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Buffer__majority_class_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Buffer__majority_class_id(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Buffer__majority_class_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Buffer_message_member_array[14] = {
  {
    "agent_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, agent_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__agent_ids,  // size() function pointer
    get_const_function__Buffer__agent_ids,  // get_const(index) function pointer
    get_function__Buffer__agent_ids,  // get(index) function pointer
    fetch_function__Buffer__agent_ids,  // fetch(index, &value) function pointer
    assign_function__Buffer__agent_ids,  // assign(index, value) function pointer
    resize_function__Buffer__agent_ids  // resize(index) function pointer
  },
  {
    "agent_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, agent_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x_velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<smrr_interfaces::msg::DataElementFloat>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, x_velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__x_velocities,  // size() function pointer
    get_const_function__Buffer__x_velocities,  // get_const(index) function pointer
    get_function__Buffer__x_velocities,  // get(index) function pointer
    fetch_function__Buffer__x_velocities,  // fetch(index, &value) function pointer
    assign_function__Buffer__x_velocities,  // assign(index, value) function pointer
    resize_function__Buffer__x_velocities  // resize(index) function pointer
  },
  {
    "y_velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<smrr_interfaces::msg::DataElementFloat>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, y_velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__y_velocities,  // size() function pointer
    get_const_function__Buffer__y_velocities,  // get_const(index) function pointer
    get_function__Buffer__y_velocities,  // get(index) function pointer
    fetch_function__Buffer__y_velocities,  // fetch(index, &value) function pointer
    assign_function__Buffer__y_velocities,  // assign(index, value) function pointer
    resize_function__Buffer__y_velocities  // resize(index) function pointer
  },
  {
    "class_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<smrr_interfaces::msg::DataElementString>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, class_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__class_ids,  // size() function pointer
    get_const_function__Buffer__class_ids,  // get_const(index) function pointer
    get_function__Buffer__class_ids,  // get(index) function pointer
    fetch_function__Buffer__class_ids,  // fetch(index, &value) function pointer
    assign_function__Buffer__class_ids,  // assign(index, value) function pointer
    resize_function__Buffer__class_ids  // resize(index) function pointer
  },
  {
    "x_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<smrr_interfaces::msg::DataElementFloat>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, x_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__x_positions,  // size() function pointer
    get_const_function__Buffer__x_positions,  // get_const(index) function pointer
    get_function__Buffer__x_positions,  // get(index) function pointer
    fetch_function__Buffer__x_positions,  // fetch(index, &value) function pointer
    assign_function__Buffer__x_positions,  // assign(index, value) function pointer
    resize_function__Buffer__x_positions  // resize(index) function pointer
  },
  {
    "y_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<smrr_interfaces::msg::DataElementFloat>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, y_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__y_positions,  // size() function pointer
    get_const_function__Buffer__y_positions,  // get_const(index) function pointer
    get_function__Buffer__y_positions,  // get(index) function pointer
    fetch_function__Buffer__y_positions,  // fetch(index, &value) function pointer
    assign_function__Buffer__y_positions,  // assign(index, value) function pointer
    resize_function__Buffer__y_positions  // resize(index) function pointer
  },
  {
    "x_mean",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, x_mean),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__x_mean,  // size() function pointer
    get_const_function__Buffer__x_mean,  // get_const(index) function pointer
    get_function__Buffer__x_mean,  // get(index) function pointer
    fetch_function__Buffer__x_mean,  // fetch(index, &value) function pointer
    assign_function__Buffer__x_mean,  // assign(index, value) function pointer
    resize_function__Buffer__x_mean  // resize(index) function pointer
  },
  {
    "y_mean",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, y_mean),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__y_mean,  // size() function pointer
    get_const_function__Buffer__y_mean,  // get_const(index) function pointer
    get_function__Buffer__y_mean,  // get(index) function pointer
    fetch_function__Buffer__y_mean,  // fetch(index, &value) function pointer
    assign_function__Buffer__y_mean,  // assign(index, value) function pointer
    resize_function__Buffer__y_mean  // resize(index) function pointer
  },
  {
    "x_std_dev",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, x_std_dev),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__x_std_dev,  // size() function pointer
    get_const_function__Buffer__x_std_dev,  // get_const(index) function pointer
    get_function__Buffer__x_std_dev,  // get(index) function pointer
    fetch_function__Buffer__x_std_dev,  // fetch(index, &value) function pointer
    assign_function__Buffer__x_std_dev,  // assign(index, value) function pointer
    resize_function__Buffer__x_std_dev  // resize(index) function pointer
  },
  {
    "y_std_dev",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, y_std_dev),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__y_std_dev,  // size() function pointer
    get_const_function__Buffer__y_std_dev,  // get_const(index) function pointer
    get_function__Buffer__y_std_dev,  // get(index) function pointer
    fetch_function__Buffer__y_std_dev,  // fetch(index, &value) function pointer
    assign_function__Buffer__y_std_dev,  // assign(index, value) function pointer
    resize_function__Buffer__y_std_dev  // resize(index) function pointer
  },
  {
    "x_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, x_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__x_variance,  // size() function pointer
    get_const_function__Buffer__x_variance,  // get_const(index) function pointer
    get_function__Buffer__x_variance,  // get(index) function pointer
    fetch_function__Buffer__x_variance,  // fetch(index, &value) function pointer
    assign_function__Buffer__x_variance,  // assign(index, value) function pointer
    resize_function__Buffer__x_variance  // resize(index) function pointer
  },
  {
    "y_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, y_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__y_variance,  // size() function pointer
    get_const_function__Buffer__y_variance,  // get_const(index) function pointer
    get_function__Buffer__y_variance,  // get(index) function pointer
    fetch_function__Buffer__y_variance,  // fetch(index, &value) function pointer
    assign_function__Buffer__y_variance,  // assign(index, value) function pointer
    resize_function__Buffer__y_variance  // resize(index) function pointer
  },
  {
    "majority_class_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Buffer, majority_class_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buffer__majority_class_id,  // size() function pointer
    get_const_function__Buffer__majority_class_id,  // get_const(index) function pointer
    get_function__Buffer__majority_class_id,  // get(index) function pointer
    fetch_function__Buffer__majority_class_id,  // fetch(index, &value) function pointer
    assign_function__Buffer__majority_class_id,  // assign(index, value) function pointer
    resize_function__Buffer__majority_class_id  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Buffer_message_members = {
  "smrr_interfaces::msg",  // message namespace
  "Buffer",  // message name
  14,  // number of fields
  sizeof(smrr_interfaces::msg::Buffer),
  Buffer_message_member_array,  // message members
  Buffer_init_function,  // function to initialize message memory (memory has to be allocated)
  Buffer_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Buffer_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Buffer_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace smrr_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<smrr_interfaces::msg::Buffer>()
{
  return &::smrr_interfaces::msg::rosidl_typesupport_introspection_cpp::Buffer_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, smrr_interfaces, msg, Buffer)() {
  return &::smrr_interfaces::msg::rosidl_typesupport_introspection_cpp::Buffer_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
