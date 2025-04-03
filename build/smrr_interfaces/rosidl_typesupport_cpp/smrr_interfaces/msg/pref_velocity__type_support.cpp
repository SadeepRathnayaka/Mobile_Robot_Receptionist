// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from smrr_interfaces:msg/PrefVelocity.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "smrr_interfaces/msg/detail/pref_velocity__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace smrr_interfaces
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _PrefVelocity_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PrefVelocity_type_support_ids_t;

static const _PrefVelocity_type_support_ids_t _PrefVelocity_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PrefVelocity_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PrefVelocity_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PrefVelocity_type_support_symbol_names_t _PrefVelocity_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, smrr_interfaces, msg, PrefVelocity)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, smrr_interfaces, msg, PrefVelocity)),
  }
};

typedef struct _PrefVelocity_type_support_data_t
{
  void * data[2];
} _PrefVelocity_type_support_data_t;

static _PrefVelocity_type_support_data_t _PrefVelocity_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PrefVelocity_message_typesupport_map = {
  2,
  "smrr_interfaces",
  &_PrefVelocity_message_typesupport_ids.typesupport_identifier[0],
  &_PrefVelocity_message_typesupport_symbol_names.symbol_name[0],
  &_PrefVelocity_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PrefVelocity_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PrefVelocity_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace smrr_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<smrr_interfaces::msg::PrefVelocity>()
{
  return &::smrr_interfaces::msg::rosidl_typesupport_cpp::PrefVelocity_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, smrr_interfaces, msg, PrefVelocity)() {
  return get_message_type_support_handle<smrr_interfaces::msg::PrefVelocity>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
