// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smrr_interfaces:msg/Buffer.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/buffer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `agent_ids`
// Member `x_mean`
// Member `y_mean`
// Member `x_std_dev`
// Member `y_std_dev`
// Member `x_variance`
// Member `y_variance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `x_velocities`
// Member `y_velocities`
// Member `x_positions`
// Member `y_positions`
#include "smrr_interfaces/msg/detail/data_element_float__functions.h"
// Member `class_ids`
#include "smrr_interfaces/msg/detail/data_element_string__functions.h"
// Member `majority_class_id`
#include "rosidl_runtime_c/string_functions.h"

bool
smrr_interfaces__msg__Buffer__init(smrr_interfaces__msg__Buffer * msg)
{
  if (!msg) {
    return false;
  }
  // agent_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->agent_ids, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // agent_count
  // x_velocities
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__init(&msg->x_velocities, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // y_velocities
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__init(&msg->y_velocities, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // class_ids
  if (!smrr_interfaces__msg__DataElementString__Sequence__init(&msg->class_ids, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // x_positions
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__init(&msg->x_positions, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // y_positions
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__init(&msg->y_positions, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // x_mean
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x_mean, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // y_mean
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y_mean, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // x_std_dev
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x_std_dev, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // y_std_dev
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y_std_dev, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // x_variance
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x_variance, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // y_variance
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y_variance, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  // majority_class_id
  if (!rosidl_runtime_c__String__Sequence__init(&msg->majority_class_id, 0)) {
    smrr_interfaces__msg__Buffer__fini(msg);
    return false;
  }
  return true;
}

void
smrr_interfaces__msg__Buffer__fini(smrr_interfaces__msg__Buffer * msg)
{
  if (!msg) {
    return;
  }
  // agent_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->agent_ids);
  // agent_count
  // x_velocities
  smrr_interfaces__msg__DataElementFloat__Sequence__fini(&msg->x_velocities);
  // y_velocities
  smrr_interfaces__msg__DataElementFloat__Sequence__fini(&msg->y_velocities);
  // class_ids
  smrr_interfaces__msg__DataElementString__Sequence__fini(&msg->class_ids);
  // x_positions
  smrr_interfaces__msg__DataElementFloat__Sequence__fini(&msg->x_positions);
  // y_positions
  smrr_interfaces__msg__DataElementFloat__Sequence__fini(&msg->y_positions);
  // x_mean
  rosidl_runtime_c__float__Sequence__fini(&msg->x_mean);
  // y_mean
  rosidl_runtime_c__float__Sequence__fini(&msg->y_mean);
  // x_std_dev
  rosidl_runtime_c__float__Sequence__fini(&msg->x_std_dev);
  // y_std_dev
  rosidl_runtime_c__float__Sequence__fini(&msg->y_std_dev);
  // x_variance
  rosidl_runtime_c__float__Sequence__fini(&msg->x_variance);
  // y_variance
  rosidl_runtime_c__float__Sequence__fini(&msg->y_variance);
  // majority_class_id
  rosidl_runtime_c__String__Sequence__fini(&msg->majority_class_id);
}

bool
smrr_interfaces__msg__Buffer__are_equal(const smrr_interfaces__msg__Buffer * lhs, const smrr_interfaces__msg__Buffer * rhs)
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
  // agent_count
  if (lhs->agent_count != rhs->agent_count) {
    return false;
  }
  // x_velocities
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__are_equal(
      &(lhs->x_velocities), &(rhs->x_velocities)))
  {
    return false;
  }
  // y_velocities
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__are_equal(
      &(lhs->y_velocities), &(rhs->y_velocities)))
  {
    return false;
  }
  // class_ids
  if (!smrr_interfaces__msg__DataElementString__Sequence__are_equal(
      &(lhs->class_ids), &(rhs->class_ids)))
  {
    return false;
  }
  // x_positions
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__are_equal(
      &(lhs->x_positions), &(rhs->x_positions)))
  {
    return false;
  }
  // y_positions
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__are_equal(
      &(lhs->y_positions), &(rhs->y_positions)))
  {
    return false;
  }
  // x_mean
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x_mean), &(rhs->x_mean)))
  {
    return false;
  }
  // y_mean
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y_mean), &(rhs->y_mean)))
  {
    return false;
  }
  // x_std_dev
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x_std_dev), &(rhs->x_std_dev)))
  {
    return false;
  }
  // y_std_dev
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y_std_dev), &(rhs->y_std_dev)))
  {
    return false;
  }
  // x_variance
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x_variance), &(rhs->x_variance)))
  {
    return false;
  }
  // y_variance
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y_variance), &(rhs->y_variance)))
  {
    return false;
  }
  // majority_class_id
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->majority_class_id), &(rhs->majority_class_id)))
  {
    return false;
  }
  return true;
}

bool
smrr_interfaces__msg__Buffer__copy(
  const smrr_interfaces__msg__Buffer * input,
  smrr_interfaces__msg__Buffer * output)
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
  // agent_count
  output->agent_count = input->agent_count;
  // x_velocities
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__copy(
      &(input->x_velocities), &(output->x_velocities)))
  {
    return false;
  }
  // y_velocities
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__copy(
      &(input->y_velocities), &(output->y_velocities)))
  {
    return false;
  }
  // class_ids
  if (!smrr_interfaces__msg__DataElementString__Sequence__copy(
      &(input->class_ids), &(output->class_ids)))
  {
    return false;
  }
  // x_positions
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__copy(
      &(input->x_positions), &(output->x_positions)))
  {
    return false;
  }
  // y_positions
  if (!smrr_interfaces__msg__DataElementFloat__Sequence__copy(
      &(input->y_positions), &(output->y_positions)))
  {
    return false;
  }
  // x_mean
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x_mean), &(output->x_mean)))
  {
    return false;
  }
  // y_mean
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y_mean), &(output->y_mean)))
  {
    return false;
  }
  // x_std_dev
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x_std_dev), &(output->x_std_dev)))
  {
    return false;
  }
  // y_std_dev
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y_std_dev), &(output->y_std_dev)))
  {
    return false;
  }
  // x_variance
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x_variance), &(output->x_variance)))
  {
    return false;
  }
  // y_variance
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y_variance), &(output->y_variance)))
  {
    return false;
  }
  // majority_class_id
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->majority_class_id), &(output->majority_class_id)))
  {
    return false;
  }
  return true;
}

smrr_interfaces__msg__Buffer *
smrr_interfaces__msg__Buffer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__Buffer * msg = (smrr_interfaces__msg__Buffer *)allocator.allocate(sizeof(smrr_interfaces__msg__Buffer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smrr_interfaces__msg__Buffer));
  bool success = smrr_interfaces__msg__Buffer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smrr_interfaces__msg__Buffer__destroy(smrr_interfaces__msg__Buffer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smrr_interfaces__msg__Buffer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smrr_interfaces__msg__Buffer__Sequence__init(smrr_interfaces__msg__Buffer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__Buffer * data = NULL;

  if (size) {
    data = (smrr_interfaces__msg__Buffer *)allocator.zero_allocate(size, sizeof(smrr_interfaces__msg__Buffer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smrr_interfaces__msg__Buffer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smrr_interfaces__msg__Buffer__fini(&data[i - 1]);
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
smrr_interfaces__msg__Buffer__Sequence__fini(smrr_interfaces__msg__Buffer__Sequence * array)
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
      smrr_interfaces__msg__Buffer__fini(&array->data[i]);
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

smrr_interfaces__msg__Buffer__Sequence *
smrr_interfaces__msg__Buffer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__Buffer__Sequence * array = (smrr_interfaces__msg__Buffer__Sequence *)allocator.allocate(sizeof(smrr_interfaces__msg__Buffer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smrr_interfaces__msg__Buffer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smrr_interfaces__msg__Buffer__Sequence__destroy(smrr_interfaces__msg__Buffer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smrr_interfaces__msg__Buffer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smrr_interfaces__msg__Buffer__Sequence__are_equal(const smrr_interfaces__msg__Buffer__Sequence * lhs, const smrr_interfaces__msg__Buffer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smrr_interfaces__msg__Buffer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smrr_interfaces__msg__Buffer__Sequence__copy(
  const smrr_interfaces__msg__Buffer__Sequence * input,
  smrr_interfaces__msg__Buffer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smrr_interfaces__msg__Buffer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smrr_interfaces__msg__Buffer * data =
      (smrr_interfaces__msg__Buffer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smrr_interfaces__msg__Buffer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smrr_interfaces__msg__Buffer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smrr_interfaces__msg__Buffer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
