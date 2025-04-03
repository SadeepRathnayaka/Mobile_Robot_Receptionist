// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from smrr_interfaces:msg/DataElementInt.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_INT__FUNCTIONS_H_
#define SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_INT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "smrr_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "smrr_interfaces/msg/detail/data_element_int__struct.h"

/// Initialize msg/DataElementInt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smrr_interfaces__msg__DataElementInt
 * )) before or use
 * smrr_interfaces__msg__DataElementInt__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__msg__DataElementInt__init(smrr_interfaces__msg__DataElementInt * msg);

/// Finalize msg/DataElementInt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__msg__DataElementInt__fini(smrr_interfaces__msg__DataElementInt * msg);

/// Create msg/DataElementInt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smrr_interfaces__msg__DataElementInt__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__msg__DataElementInt *
smrr_interfaces__msg__DataElementInt__create();

/// Destroy msg/DataElementInt message.
/**
 * It calls
 * smrr_interfaces__msg__DataElementInt__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__msg__DataElementInt__destroy(smrr_interfaces__msg__DataElementInt * msg);

/// Check for msg/DataElementInt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__msg__DataElementInt__are_equal(const smrr_interfaces__msg__DataElementInt * lhs, const smrr_interfaces__msg__DataElementInt * rhs);

/// Copy a msg/DataElementInt message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__msg__DataElementInt__copy(
  const smrr_interfaces__msg__DataElementInt * input,
  smrr_interfaces__msg__DataElementInt * output);

/// Initialize array of msg/DataElementInt messages.
/**
 * It allocates the memory for the number of elements and calls
 * smrr_interfaces__msg__DataElementInt__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__msg__DataElementInt__Sequence__init(smrr_interfaces__msg__DataElementInt__Sequence * array, size_t size);

/// Finalize array of msg/DataElementInt messages.
/**
 * It calls
 * smrr_interfaces__msg__DataElementInt__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__msg__DataElementInt__Sequence__fini(smrr_interfaces__msg__DataElementInt__Sequence * array);

/// Create array of msg/DataElementInt messages.
/**
 * It allocates the memory for the array and calls
 * smrr_interfaces__msg__DataElementInt__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__msg__DataElementInt__Sequence *
smrr_interfaces__msg__DataElementInt__Sequence__create(size_t size);

/// Destroy array of msg/DataElementInt messages.
/**
 * It calls
 * smrr_interfaces__msg__DataElementInt__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__msg__DataElementInt__Sequence__destroy(smrr_interfaces__msg__DataElementInt__Sequence * array);

/// Check for msg/DataElementInt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__msg__DataElementInt__Sequence__are_equal(const smrr_interfaces__msg__DataElementInt__Sequence * lhs, const smrr_interfaces__msg__DataElementInt__Sequence * rhs);

/// Copy an array of msg/DataElementInt messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__msg__DataElementInt__Sequence__copy(
  const smrr_interfaces__msg__DataElementInt__Sequence * input,
  smrr_interfaces__msg__DataElementInt__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_INT__FUNCTIONS_H_
