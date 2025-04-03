// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from smrr_interfaces:msg/Entities.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "smrr_interfaces/msg/detail/entities__struct.h"
#include "smrr_interfaces/msg/detail/entities__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace smrr_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Entities_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Entities_type_support_ids_t;

static const _Entities_type_support_ids_t _Entities_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Entities_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Entities_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Entities_type_support_symbol_names_t _Entities_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, Entities)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, Entities)),
  }
};

typedef struct _Entities_type_support_data_t
{
  void * data[2];
} _Entities_type_support_data_t;

static _Entities_type_support_data_t _Entities_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Entities_message_typesupport_map = {
  2,
  "smrr_interfaces",
  &_Entities_message_typesupport_ids.typesupport_identifier[0],
  &_Entities_message_typesupport_symbol_names.symbol_name[0],
  &_Entities_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Entities_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Entities_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace smrr_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, smrr_interfaces, msg, Entities)() {
  return &::smrr_interfaces::msg::rosidl_typesupport_c::Entities_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
