// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from smrr_interfaces:action/NavigateToGoal.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_GOAL__FUNCTIONS_H_
#define SMRR_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_GOAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "smrr_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "smrr_interfaces/action/detail/navigate_to_goal__struct.h"

/// Initialize action/NavigateToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smrr_interfaces__action__NavigateToGoal_Goal
 * )) before or use
 * smrr_interfaces__action__NavigateToGoal_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Goal__init(smrr_interfaces__action__NavigateToGoal_Goal * msg);

/// Finalize action/NavigateToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Goal__fini(smrr_interfaces__action__NavigateToGoal_Goal * msg);

/// Create action/NavigateToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smrr_interfaces__action__NavigateToGoal_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_Goal *
smrr_interfaces__action__NavigateToGoal_Goal__create();

/// Destroy action/NavigateToGoal message.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Goal__destroy(smrr_interfaces__action__NavigateToGoal_Goal * msg);

/// Check for action/NavigateToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Goal__are_equal(const smrr_interfaces__action__NavigateToGoal_Goal * lhs, const smrr_interfaces__action__NavigateToGoal_Goal * rhs);

/// Copy a action/NavigateToGoal message.
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
smrr_interfaces__action__NavigateToGoal_Goal__copy(
  const smrr_interfaces__action__NavigateToGoal_Goal * input,
  smrr_interfaces__action__NavigateToGoal_Goal * output);

/// Initialize array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * smrr_interfaces__action__NavigateToGoal_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Goal__Sequence__init(smrr_interfaces__action__NavigateToGoal_Goal__Sequence * array, size_t size);

/// Finalize array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Goal__Sequence__fini(smrr_interfaces__action__NavigateToGoal_Goal__Sequence * array);

/// Create array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the array and calls
 * smrr_interfaces__action__NavigateToGoal_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_Goal__Sequence *
smrr_interfaces__action__NavigateToGoal_Goal__Sequence__create(size_t size);

/// Destroy array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Goal__Sequence__destroy(smrr_interfaces__action__NavigateToGoal_Goal__Sequence * array);

/// Check for action/NavigateToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Goal__Sequence__are_equal(const smrr_interfaces__action__NavigateToGoal_Goal__Sequence * lhs, const smrr_interfaces__action__NavigateToGoal_Goal__Sequence * rhs);

/// Copy an array of action/NavigateToGoal messages.
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
smrr_interfaces__action__NavigateToGoal_Goal__Sequence__copy(
  const smrr_interfaces__action__NavigateToGoal_Goal__Sequence * input,
  smrr_interfaces__action__NavigateToGoal_Goal__Sequence * output);

/// Initialize action/NavigateToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smrr_interfaces__action__NavigateToGoal_Result
 * )) before or use
 * smrr_interfaces__action__NavigateToGoal_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Result__init(smrr_interfaces__action__NavigateToGoal_Result * msg);

/// Finalize action/NavigateToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Result__fini(smrr_interfaces__action__NavigateToGoal_Result * msg);

/// Create action/NavigateToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smrr_interfaces__action__NavigateToGoal_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_Result *
smrr_interfaces__action__NavigateToGoal_Result__create();

/// Destroy action/NavigateToGoal message.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Result__destroy(smrr_interfaces__action__NavigateToGoal_Result * msg);

/// Check for action/NavigateToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Result__are_equal(const smrr_interfaces__action__NavigateToGoal_Result * lhs, const smrr_interfaces__action__NavigateToGoal_Result * rhs);

/// Copy a action/NavigateToGoal message.
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
smrr_interfaces__action__NavigateToGoal_Result__copy(
  const smrr_interfaces__action__NavigateToGoal_Result * input,
  smrr_interfaces__action__NavigateToGoal_Result * output);

/// Initialize array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * smrr_interfaces__action__NavigateToGoal_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Result__Sequence__init(smrr_interfaces__action__NavigateToGoal_Result__Sequence * array, size_t size);

/// Finalize array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Result__Sequence__fini(smrr_interfaces__action__NavigateToGoal_Result__Sequence * array);

/// Create array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the array and calls
 * smrr_interfaces__action__NavigateToGoal_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_Result__Sequence *
smrr_interfaces__action__NavigateToGoal_Result__Sequence__create(size_t size);

/// Destroy array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Result__Sequence__destroy(smrr_interfaces__action__NavigateToGoal_Result__Sequence * array);

/// Check for action/NavigateToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Result__Sequence__are_equal(const smrr_interfaces__action__NavigateToGoal_Result__Sequence * lhs, const smrr_interfaces__action__NavigateToGoal_Result__Sequence * rhs);

/// Copy an array of action/NavigateToGoal messages.
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
smrr_interfaces__action__NavigateToGoal_Result__Sequence__copy(
  const smrr_interfaces__action__NavigateToGoal_Result__Sequence * input,
  smrr_interfaces__action__NavigateToGoal_Result__Sequence * output);

/// Initialize action/NavigateToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smrr_interfaces__action__NavigateToGoal_Feedback
 * )) before or use
 * smrr_interfaces__action__NavigateToGoal_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Feedback__init(smrr_interfaces__action__NavigateToGoal_Feedback * msg);

/// Finalize action/NavigateToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Feedback__fini(smrr_interfaces__action__NavigateToGoal_Feedback * msg);

/// Create action/NavigateToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smrr_interfaces__action__NavigateToGoal_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_Feedback *
smrr_interfaces__action__NavigateToGoal_Feedback__create();

/// Destroy action/NavigateToGoal message.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Feedback__destroy(smrr_interfaces__action__NavigateToGoal_Feedback * msg);

/// Check for action/NavigateToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Feedback__are_equal(const smrr_interfaces__action__NavigateToGoal_Feedback * lhs, const smrr_interfaces__action__NavigateToGoal_Feedback * rhs);

/// Copy a action/NavigateToGoal message.
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
smrr_interfaces__action__NavigateToGoal_Feedback__copy(
  const smrr_interfaces__action__NavigateToGoal_Feedback * input,
  smrr_interfaces__action__NavigateToGoal_Feedback * output);

/// Initialize array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * smrr_interfaces__action__NavigateToGoal_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Feedback__Sequence__init(smrr_interfaces__action__NavigateToGoal_Feedback__Sequence * array, size_t size);

/// Finalize array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Feedback__Sequence__fini(smrr_interfaces__action__NavigateToGoal_Feedback__Sequence * array);

/// Create array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the array and calls
 * smrr_interfaces__action__NavigateToGoal_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_Feedback__Sequence *
smrr_interfaces__action__NavigateToGoal_Feedback__Sequence__create(size_t size);

/// Destroy array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_Feedback__Sequence__destroy(smrr_interfaces__action__NavigateToGoal_Feedback__Sequence * array);

/// Check for action/NavigateToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_Feedback__Sequence__are_equal(const smrr_interfaces__action__NavigateToGoal_Feedback__Sequence * lhs, const smrr_interfaces__action__NavigateToGoal_Feedback__Sequence * rhs);

/// Copy an array of action/NavigateToGoal messages.
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
smrr_interfaces__action__NavigateToGoal_Feedback__Sequence__copy(
  const smrr_interfaces__action__NavigateToGoal_Feedback__Sequence * input,
  smrr_interfaces__action__NavigateToGoal_Feedback__Sequence * output);

/// Initialize action/NavigateToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Request
 * )) before or use
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__init(smrr_interfaces__action__NavigateToGoal_SendGoal_Request * msg);

/// Finalize action/NavigateToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__fini(smrr_interfaces__action__NavigateToGoal_SendGoal_Request * msg);

/// Create action/NavigateToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_SendGoal_Request *
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__create();

/// Destroy action/NavigateToGoal message.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__destroy(smrr_interfaces__action__NavigateToGoal_SendGoal_Request * msg);

/// Check for action/NavigateToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__are_equal(const smrr_interfaces__action__NavigateToGoal_SendGoal_Request * lhs, const smrr_interfaces__action__NavigateToGoal_SendGoal_Request * rhs);

/// Copy a action/NavigateToGoal message.
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
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__copy(
  const smrr_interfaces__action__NavigateToGoal_SendGoal_Request * input,
  smrr_interfaces__action__NavigateToGoal_SendGoal_Request * output);

/// Initialize array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence__init(smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence__fini(smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence * array);

/// Create array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the array and calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence *
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence__destroy(smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence * array);

/// Check for action/NavigateToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence__are_equal(const smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence * lhs, const smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/NavigateToGoal messages.
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
smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence__copy(
  const smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence * input,
  smrr_interfaces__action__NavigateToGoal_SendGoal_Request__Sequence * output);

/// Initialize action/NavigateToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Response
 * )) before or use
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__init(smrr_interfaces__action__NavigateToGoal_SendGoal_Response * msg);

/// Finalize action/NavigateToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__fini(smrr_interfaces__action__NavigateToGoal_SendGoal_Response * msg);

/// Create action/NavigateToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_SendGoal_Response *
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__create();

/// Destroy action/NavigateToGoal message.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__destroy(smrr_interfaces__action__NavigateToGoal_SendGoal_Response * msg);

/// Check for action/NavigateToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__are_equal(const smrr_interfaces__action__NavigateToGoal_SendGoal_Response * lhs, const smrr_interfaces__action__NavigateToGoal_SendGoal_Response * rhs);

/// Copy a action/NavigateToGoal message.
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
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__copy(
  const smrr_interfaces__action__NavigateToGoal_SendGoal_Response * input,
  smrr_interfaces__action__NavigateToGoal_SendGoal_Response * output);

/// Initialize array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence__init(smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence__fini(smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence * array);

/// Create array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the array and calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence *
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence__destroy(smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence * array);

/// Check for action/NavigateToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence__are_equal(const smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence * lhs, const smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/NavigateToGoal messages.
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
smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence__copy(
  const smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence * input,
  smrr_interfaces__action__NavigateToGoal_SendGoal_Response__Sequence * output);

/// Initialize action/NavigateToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smrr_interfaces__action__NavigateToGoal_GetResult_Request
 * )) before or use
 * smrr_interfaces__action__NavigateToGoal_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_GetResult_Request__init(smrr_interfaces__action__NavigateToGoal_GetResult_Request * msg);

/// Finalize action/NavigateToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_GetResult_Request__fini(smrr_interfaces__action__NavigateToGoal_GetResult_Request * msg);

/// Create action/NavigateToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_GetResult_Request *
smrr_interfaces__action__NavigateToGoal_GetResult_Request__create();

/// Destroy action/NavigateToGoal message.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_GetResult_Request__destroy(smrr_interfaces__action__NavigateToGoal_GetResult_Request * msg);

/// Check for action/NavigateToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_GetResult_Request__are_equal(const smrr_interfaces__action__NavigateToGoal_GetResult_Request * lhs, const smrr_interfaces__action__NavigateToGoal_GetResult_Request * rhs);

/// Copy a action/NavigateToGoal message.
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
smrr_interfaces__action__NavigateToGoal_GetResult_Request__copy(
  const smrr_interfaces__action__NavigateToGoal_GetResult_Request * input,
  smrr_interfaces__action__NavigateToGoal_GetResult_Request * output);

/// Initialize array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence__init(smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence__fini(smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence * array);

/// Create array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the array and calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence *
smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence__destroy(smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence * array);

/// Check for action/NavigateToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence__are_equal(const smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence * lhs, const smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence * rhs);

/// Copy an array of action/NavigateToGoal messages.
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
smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence__copy(
  const smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence * input,
  smrr_interfaces__action__NavigateToGoal_GetResult_Request__Sequence * output);

/// Initialize action/NavigateToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smrr_interfaces__action__NavigateToGoal_GetResult_Response
 * )) before or use
 * smrr_interfaces__action__NavigateToGoal_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_GetResult_Response__init(smrr_interfaces__action__NavigateToGoal_GetResult_Response * msg);

/// Finalize action/NavigateToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_GetResult_Response__fini(smrr_interfaces__action__NavigateToGoal_GetResult_Response * msg);

/// Create action/NavigateToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_GetResult_Response *
smrr_interfaces__action__NavigateToGoal_GetResult_Response__create();

/// Destroy action/NavigateToGoal message.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_GetResult_Response__destroy(smrr_interfaces__action__NavigateToGoal_GetResult_Response * msg);

/// Check for action/NavigateToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_GetResult_Response__are_equal(const smrr_interfaces__action__NavigateToGoal_GetResult_Response * lhs, const smrr_interfaces__action__NavigateToGoal_GetResult_Response * rhs);

/// Copy a action/NavigateToGoal message.
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
smrr_interfaces__action__NavigateToGoal_GetResult_Response__copy(
  const smrr_interfaces__action__NavigateToGoal_GetResult_Response * input,
  smrr_interfaces__action__NavigateToGoal_GetResult_Response * output);

/// Initialize array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence__init(smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence__fini(smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence * array);

/// Create array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the array and calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence *
smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence__destroy(smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence * array);

/// Check for action/NavigateToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence__are_equal(const smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence * lhs, const smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence * rhs);

/// Copy an array of action/NavigateToGoal messages.
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
smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence__copy(
  const smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence * input,
  smrr_interfaces__action__NavigateToGoal_GetResult_Response__Sequence * output);

/// Initialize action/NavigateToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smrr_interfaces__action__NavigateToGoal_FeedbackMessage
 * )) before or use
 * smrr_interfaces__action__NavigateToGoal_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__init(smrr_interfaces__action__NavigateToGoal_FeedbackMessage * msg);

/// Finalize action/NavigateToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__fini(smrr_interfaces__action__NavigateToGoal_FeedbackMessage * msg);

/// Create action/NavigateToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smrr_interfaces__action__NavigateToGoal_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_FeedbackMessage *
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__create();

/// Destroy action/NavigateToGoal message.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__destroy(smrr_interfaces__action__NavigateToGoal_FeedbackMessage * msg);

/// Check for action/NavigateToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__are_equal(const smrr_interfaces__action__NavigateToGoal_FeedbackMessage * lhs, const smrr_interfaces__action__NavigateToGoal_FeedbackMessage * rhs);

/// Copy a action/NavigateToGoal message.
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
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__copy(
  const smrr_interfaces__action__NavigateToGoal_FeedbackMessage * input,
  smrr_interfaces__action__NavigateToGoal_FeedbackMessage * output);

/// Initialize array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * smrr_interfaces__action__NavigateToGoal_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence__init(smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence__fini(smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence * array);

/// Create array of action/NavigateToGoal messages.
/**
 * It allocates the memory for the array and calls
 * smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence *
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/NavigateToGoal messages.
/**
 * It calls
 * smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
void
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence__destroy(smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence * array);

/// Check for action/NavigateToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smrr_interfaces
bool
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence__are_equal(const smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence * lhs, const smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/NavigateToGoal messages.
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
smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence__copy(
  const smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence * input,
  smrr_interfaces__action__NavigateToGoal_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_GOAL__FUNCTIONS_H_
