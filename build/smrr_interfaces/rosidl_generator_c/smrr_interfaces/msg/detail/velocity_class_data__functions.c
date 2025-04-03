// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smrr_interfaces:msg/VelocityClassData.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/velocity_class_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `x_velocities`
// Member `y_velocities`
// Member `x_positions`
// Member `y_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
smrr_interfaces__msg__VelocityClassData__init(smrr_interfaces__msg__VelocityClassData * msg)
{
  if (!msg) {
    return false;
  }
  // class_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->class_ids, 0)) {
    smrr_interfaces__msg__VelocityClassData__fini(msg);
    return false;
  }
  // x_velocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x_velocities, 0)) {
    smrr_interfaces__msg__VelocityClassData__fini(msg);
    return false;
  }
  // y_velocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y_velocities, 0)) {
    smrr_interfaces__msg__VelocityClassData__fini(msg);
    return false;
  }
  // x_positions
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x_positions, 0)) {
    smrr_interfaces__msg__VelocityClassData__fini(msg);
    return false;
  }
  // y_positions
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y_positions, 0)) {
    smrr_interfaces__msg__VelocityClassData__fini(msg);
    return false;
  }
  return true;
}

void
smrr_interfaces__msg__VelocityClassData__fini(smrr_interfaces__msg__VelocityClassData * msg)
{
  if (!msg) {
    return;
  }
  // class_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->class_ids);
  // x_velocities
  rosidl_runtime_c__float__Sequence__fini(&msg->x_velocities);
  // y_velocities
  rosidl_runtime_c__float__Sequence__fini(&msg->y_velocities);
  // x_positions
  rosidl_runtime_c__float__Sequence__fini(&msg->x_positions);
  // y_positions
  rosidl_runtime_c__float__Sequence__fini(&msg->y_positions);
}

bool
smrr_interfaces__msg__VelocityClassData__are_equal(const smrr_interfaces__msg__VelocityClassData * lhs, const smrr_interfaces__msg__VelocityClassData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->class_ids), &(rhs->class_ids)))
  {
    return false;
  }
  // x_velocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x_velocities), &(rhs->x_velocities)))
  {
    return false;
  }
  // y_velocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y_velocities), &(rhs->y_velocities)))
  {
    return false;
  }
  // x_positions
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x_positions), &(rhs->x_positions)))
  {
    return false;
  }
  // y_positions
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y_positions), &(rhs->y_positions)))
  {
    return false;
  }
  return true;
}

bool
smrr_interfaces__msg__VelocityClassData__copy(
  const smrr_interfaces__msg__VelocityClassData * input,
  smrr_interfaces__msg__VelocityClassData * output)
{
  if (!input || !output) {
    return false;
  }
  // class_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->class_ids), &(output->class_ids)))
  {
    return false;
  }
  // x_velocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x_velocities), &(output->x_velocities)))
  {
    return false;
  }
  // y_velocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y_velocities), &(output->y_velocities)))
  {
    return false;
  }
  // x_positions
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x_positions), &(output->x_positions)))
  {
    return false;
  }
  // y_positions
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y_positions), &(output->y_positions)))
  {
    return false;
  }
  return true;
}

smrr_interfaces__msg__VelocityClassData *
smrr_interfaces__msg__VelocityClassData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__VelocityClassData * msg = (smrr_interfaces__msg__VelocityClassData *)allocator.allocate(sizeof(smrr_interfaces__msg__VelocityClassData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smrr_interfaces__msg__VelocityClassData));
  bool success = smrr_interfaces__msg__VelocityClassData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smrr_interfaces__msg__VelocityClassData__destroy(smrr_interfaces__msg__VelocityClassData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smrr_interfaces__msg__VelocityClassData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smrr_interfaces__msg__VelocityClassData__Sequence__init(smrr_interfaces__msg__VelocityClassData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__VelocityClassData * data = NULL;

  if (size) {
    data = (smrr_interfaces__msg__VelocityClassData *)allocator.zero_allocate(size, sizeof(smrr_interfaces__msg__VelocityClassData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smrr_interfaces__msg__VelocityClassData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smrr_interfaces__msg__VelocityClassData__fini(&data[i - 1]);
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
smrr_interfaces__msg__VelocityClassData__Sequence__fini(smrr_interfaces__msg__VelocityClassData__Sequence * array)
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
      smrr_interfaces__msg__VelocityClassData__fini(&array->data[i]);
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

smrr_interfaces__msg__VelocityClassData__Sequence *
smrr_interfaces__msg__VelocityClassData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__VelocityClassData__Sequence * array = (smrr_interfaces__msg__VelocityClassData__Sequence *)allocator.allocate(sizeof(smrr_interfaces__msg__VelocityClassData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smrr_interfaces__msg__VelocityClassData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smrr_interfaces__msg__VelocityClassData__Sequence__destroy(smrr_interfaces__msg__VelocityClassData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smrr_interfaces__msg__VelocityClassData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smrr_interfaces__msg__VelocityClassData__Sequence__are_equal(const smrr_interfaces__msg__VelocityClassData__Sequence * lhs, const smrr_interfaces__msg__VelocityClassData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smrr_interfaces__msg__VelocityClassData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smrr_interfaces__msg__VelocityClassData__Sequence__copy(
  const smrr_interfaces__msg__VelocityClassData__Sequence * input,
  smrr_interfaces__msg__VelocityClassData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smrr_interfaces__msg__VelocityClassData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smrr_interfaces__msg__VelocityClassData * data =
      (smrr_interfaces__msg__VelocityClassData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smrr_interfaces__msg__VelocityClassData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smrr_interfaces__msg__VelocityClassData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smrr_interfaces__msg__VelocityClassData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
