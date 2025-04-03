// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smrr_interfaces:msg/PrefVelocity.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/pref_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `agent_ids`
// Member `preferred_velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `class_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
smrr_interfaces__msg__PrefVelocity__init(smrr_interfaces__msg__PrefVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // agent_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->agent_ids, 0)) {
    smrr_interfaces__msg__PrefVelocity__fini(msg);
    return false;
  }
  // class_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->class_ids, 0)) {
    smrr_interfaces__msg__PrefVelocity__fini(msg);
    return false;
  }
  // preferred_velocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->preferred_velocities, 0)) {
    smrr_interfaces__msg__PrefVelocity__fini(msg);
    return false;
  }
  return true;
}

void
smrr_interfaces__msg__PrefVelocity__fini(smrr_interfaces__msg__PrefVelocity * msg)
{
  if (!msg) {
    return;
  }
  // agent_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->agent_ids);
  // class_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->class_ids);
  // preferred_velocities
  rosidl_runtime_c__float__Sequence__fini(&msg->preferred_velocities);
}

bool
smrr_interfaces__msg__PrefVelocity__are_equal(const smrr_interfaces__msg__PrefVelocity * lhs, const smrr_interfaces__msg__PrefVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // agent_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->agent_ids), &(rhs->agent_ids)))
  {
    return false;
  }
  // class_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->class_ids), &(rhs->class_ids)))
  {
    return false;
  }
  // preferred_velocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->preferred_velocities), &(rhs->preferred_velocities)))
  {
    return false;
  }
  return true;
}

bool
smrr_interfaces__msg__PrefVelocity__copy(
  const smrr_interfaces__msg__PrefVelocity * input,
  smrr_interfaces__msg__PrefVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // agent_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->agent_ids), &(output->agent_ids)))
  {
    return false;
  }
  // class_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->class_ids), &(output->class_ids)))
  {
    return false;
  }
  // preferred_velocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->preferred_velocities), &(output->preferred_velocities)))
  {
    return false;
  }
  return true;
}

smrr_interfaces__msg__PrefVelocity *
smrr_interfaces__msg__PrefVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__PrefVelocity * msg = (smrr_interfaces__msg__PrefVelocity *)allocator.allocate(sizeof(smrr_interfaces__msg__PrefVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smrr_interfaces__msg__PrefVelocity));
  bool success = smrr_interfaces__msg__PrefVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smrr_interfaces__msg__PrefVelocity__destroy(smrr_interfaces__msg__PrefVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smrr_interfaces__msg__PrefVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smrr_interfaces__msg__PrefVelocity__Sequence__init(smrr_interfaces__msg__PrefVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__PrefVelocity * data = NULL;

  if (size) {
    data = (smrr_interfaces__msg__PrefVelocity *)allocator.zero_allocate(size, sizeof(smrr_interfaces__msg__PrefVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smrr_interfaces__msg__PrefVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smrr_interfaces__msg__PrefVelocity__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
smrr_interfaces__msg__PrefVelocity__Sequence__fini(smrr_interfaces__msg__PrefVelocity__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      smrr_interfaces__msg__PrefVelocity__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

smrr_interfaces__msg__PrefVelocity__Sequence *
smrr_interfaces__msg__PrefVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__PrefVelocity__Sequence * array = (smrr_interfaces__msg__PrefVelocity__Sequence *)allocator.allocate(sizeof(smrr_interfaces__msg__PrefVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smrr_interfaces__msg__PrefVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smrr_interfaces__msg__PrefVelocity__Sequence__destroy(smrr_interfaces__msg__PrefVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smrr_interfaces__msg__PrefVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smrr_interfaces__msg__PrefVelocity__Sequence__are_equal(const smrr_interfaces__msg__PrefVelocity__Sequence * lhs, const smrr_interfaces__msg__PrefVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smrr_interfaces__msg__PrefVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smrr_interfaces__msg__PrefVelocity__Sequence__copy(
  const smrr_interfaces__msg__PrefVelocity__Sequence * input,
  smrr_interfaces__msg__PrefVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smrr_interfaces__msg__PrefVelocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smrr_interfaces__msg__PrefVelocity * data =
      (smrr_interfaces__msg__PrefVelocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smrr_interfaces__msg__PrefVelocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smrr_interfaces__msg__PrefVelocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smrr_interfaces__msg__PrefVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
