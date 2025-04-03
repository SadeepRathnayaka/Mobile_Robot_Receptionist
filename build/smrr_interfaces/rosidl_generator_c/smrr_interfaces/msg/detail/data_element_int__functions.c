// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smrr_interfaces:msg/DataElementInt.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/data_element_int__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `int_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
smrr_interfaces__msg__DataElementInt__init(smrr_interfaces__msg__DataElementInt * msg)
{
  if (!msg) {
    return false;
  }
  // int_data
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->int_data, 0)) {
    smrr_interfaces__msg__DataElementInt__fini(msg);
    return false;
  }
  return true;
}

void
smrr_interfaces__msg__DataElementInt__fini(smrr_interfaces__msg__DataElementInt * msg)
{
  if (!msg) {
    return;
  }
  // int_data
  rosidl_runtime_c__int32__Sequence__fini(&msg->int_data);
}

bool
smrr_interfaces__msg__DataElementInt__are_equal(const smrr_interfaces__msg__DataElementInt * lhs, const smrr_interfaces__msg__DataElementInt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // int_data
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->int_data), &(rhs->int_data)))
  {
    return false;
  }
  return true;
}

bool
smrr_interfaces__msg__DataElementInt__copy(
  const smrr_interfaces__msg__DataElementInt * input,
  smrr_interfaces__msg__DataElementInt * output)
{
  if (!input || !output) {
    return false;
  }
  // int_data
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->int_data), &(output->int_data)))
  {
    return false;
  }
  return true;
}

smrr_interfaces__msg__DataElementInt *
smrr_interfaces__msg__DataElementInt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__DataElementInt * msg = (smrr_interfaces__msg__DataElementInt *)allocator.allocate(sizeof(smrr_interfaces__msg__DataElementInt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smrr_interfaces__msg__DataElementInt));
  bool success = smrr_interfaces__msg__DataElementInt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smrr_interfaces__msg__DataElementInt__destroy(smrr_interfaces__msg__DataElementInt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smrr_interfaces__msg__DataElementInt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smrr_interfaces__msg__DataElementInt__Sequence__init(smrr_interfaces__msg__DataElementInt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__DataElementInt * data = NULL;

  if (size) {
    data = (smrr_interfaces__msg__DataElementInt *)allocator.zero_allocate(size, sizeof(smrr_interfaces__msg__DataElementInt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smrr_interfaces__msg__DataElementInt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smrr_interfaces__msg__DataElementInt__fini(&data[i - 1]);
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
smrr_interfaces__msg__DataElementInt__Sequence__fini(smrr_interfaces__msg__DataElementInt__Sequence * array)
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
      smrr_interfaces__msg__DataElementInt__fini(&array->data[i]);
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

smrr_interfaces__msg__DataElementInt__Sequence *
smrr_interfaces__msg__DataElementInt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__DataElementInt__Sequence * array = (smrr_interfaces__msg__DataElementInt__Sequence *)allocator.allocate(sizeof(smrr_interfaces__msg__DataElementInt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smrr_interfaces__msg__DataElementInt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smrr_interfaces__msg__DataElementInt__Sequence__destroy(smrr_interfaces__msg__DataElementInt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smrr_interfaces__msg__DataElementInt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smrr_interfaces__msg__DataElementInt__Sequence__are_equal(const smrr_interfaces__msg__DataElementInt__Sequence * lhs, const smrr_interfaces__msg__DataElementInt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smrr_interfaces__msg__DataElementInt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smrr_interfaces__msg__DataElementInt__Sequence__copy(
  const smrr_interfaces__msg__DataElementInt__Sequence * input,
  smrr_interfaces__msg__DataElementInt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smrr_interfaces__msg__DataElementInt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smrr_interfaces__msg__DataElementInt * data =
      (smrr_interfaces__msg__DataElementInt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smrr_interfaces__msg__DataElementInt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smrr_interfaces__msg__DataElementInt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smrr_interfaces__msg__DataElementInt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
