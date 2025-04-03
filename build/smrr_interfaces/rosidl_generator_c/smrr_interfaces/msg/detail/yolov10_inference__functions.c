// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smrr_interfaces:msg/Yolov10Inference.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/yolov10_inference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `yolov10_inference`
#include "smrr_interfaces/msg/detail/inference_result__functions.h"

bool
smrr_interfaces__msg__Yolov10Inference__init(smrr_interfaces__msg__Yolov10Inference * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    smrr_interfaces__msg__Yolov10Inference__fini(msg);
    return false;
  }
  // yolov10_inference
  if (!smrr_interfaces__msg__InferenceResult__Sequence__init(&msg->yolov10_inference, 0)) {
    smrr_interfaces__msg__Yolov10Inference__fini(msg);
    return false;
  }
  return true;
}

void
smrr_interfaces__msg__Yolov10Inference__fini(smrr_interfaces__msg__Yolov10Inference * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // yolov10_inference
  smrr_interfaces__msg__InferenceResult__Sequence__fini(&msg->yolov10_inference);
}

bool
smrr_interfaces__msg__Yolov10Inference__are_equal(const smrr_interfaces__msg__Yolov10Inference * lhs, const smrr_interfaces__msg__Yolov10Inference * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // yolov10_inference
  if (!smrr_interfaces__msg__InferenceResult__Sequence__are_equal(
      &(lhs->yolov10_inference), &(rhs->yolov10_inference)))
  {
    return false;
  }
  return true;
}

bool
smrr_interfaces__msg__Yolov10Inference__copy(
  const smrr_interfaces__msg__Yolov10Inference * input,
  smrr_interfaces__msg__Yolov10Inference * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // yolov10_inference
  if (!smrr_interfaces__msg__InferenceResult__Sequence__copy(
      &(input->yolov10_inference), &(output->yolov10_inference)))
  {
    return false;
  }
  return true;
}

smrr_interfaces__msg__Yolov10Inference *
smrr_interfaces__msg__Yolov10Inference__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__Yolov10Inference * msg = (smrr_interfaces__msg__Yolov10Inference *)allocator.allocate(sizeof(smrr_interfaces__msg__Yolov10Inference), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smrr_interfaces__msg__Yolov10Inference));
  bool success = smrr_interfaces__msg__Yolov10Inference__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smrr_interfaces__msg__Yolov10Inference__destroy(smrr_interfaces__msg__Yolov10Inference * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smrr_interfaces__msg__Yolov10Inference__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smrr_interfaces__msg__Yolov10Inference__Sequence__init(smrr_interfaces__msg__Yolov10Inference__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__Yolov10Inference * data = NULL;

  if (size) {
    data = (smrr_interfaces__msg__Yolov10Inference *)allocator.zero_allocate(size, sizeof(smrr_interfaces__msg__Yolov10Inference), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smrr_interfaces__msg__Yolov10Inference__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smrr_interfaces__msg__Yolov10Inference__fini(&data[i - 1]);
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
smrr_interfaces__msg__Yolov10Inference__Sequence__fini(smrr_interfaces__msg__Yolov10Inference__Sequence * array)
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
      smrr_interfaces__msg__Yolov10Inference__fini(&array->data[i]);
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

smrr_interfaces__msg__Yolov10Inference__Sequence *
smrr_interfaces__msg__Yolov10Inference__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smrr_interfaces__msg__Yolov10Inference__Sequence * array = (smrr_interfaces__msg__Yolov10Inference__Sequence *)allocator.allocate(sizeof(smrr_interfaces__msg__Yolov10Inference__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smrr_interfaces__msg__Yolov10Inference__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smrr_interfaces__msg__Yolov10Inference__Sequence__destroy(smrr_interfaces__msg__Yolov10Inference__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smrr_interfaces__msg__Yolov10Inference__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smrr_interfaces__msg__Yolov10Inference__Sequence__are_equal(const smrr_interfaces__msg__Yolov10Inference__Sequence * lhs, const smrr_interfaces__msg__Yolov10Inference__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smrr_interfaces__msg__Yolov10Inference__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smrr_interfaces__msg__Yolov10Inference__Sequence__copy(
  const smrr_interfaces__msg__Yolov10Inference__Sequence * input,
  smrr_interfaces__msg__Yolov10Inference__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smrr_interfaces__msg__Yolov10Inference);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smrr_interfaces__msg__Yolov10Inference * data =
      (smrr_interfaces__msg__Yolov10Inference *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smrr_interfaces__msg__Yolov10Inference__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smrr_interfaces__msg__Yolov10Inference__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smrr_interfaces__msg__Yolov10Inference__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
