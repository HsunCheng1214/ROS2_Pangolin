// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pangolin_interfaces:action/PangolinAction.idl
// generated code does not contain a copyright notice

#ifndef PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__FUNCTIONS_H_
#define PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pangolin_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "pangolin_interfaces/action/detail/pangolin_action__struct.h"

/// Initialize action/PangolinAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pangolin_interfaces__action__PangolinAction_Goal
 * )) before or use
 * pangolin_interfaces__action__PangolinAction_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Goal__init(pangolin_interfaces__action__PangolinAction_Goal * msg);

/// Finalize action/PangolinAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Goal__fini(pangolin_interfaces__action__PangolinAction_Goal * msg);

/// Create action/PangolinAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pangolin_interfaces__action__PangolinAction_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_Goal *
pangolin_interfaces__action__PangolinAction_Goal__create();

/// Destroy action/PangolinAction message.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Goal__destroy(pangolin_interfaces__action__PangolinAction_Goal * msg);

/// Check for action/PangolinAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Goal__are_equal(const pangolin_interfaces__action__PangolinAction_Goal * lhs, const pangolin_interfaces__action__PangolinAction_Goal * rhs);

/// Copy a action/PangolinAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Goal__copy(
  const pangolin_interfaces__action__PangolinAction_Goal * input,
  pangolin_interfaces__action__PangolinAction_Goal * output);

/// Initialize array of action/PangolinAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * pangolin_interfaces__action__PangolinAction_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Goal__Sequence__init(pangolin_interfaces__action__PangolinAction_Goal__Sequence * array, size_t size);

/// Finalize array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Goal__Sequence__fini(pangolin_interfaces__action__PangolinAction_Goal__Sequence * array);

/// Create array of action/PangolinAction messages.
/**
 * It allocates the memory for the array and calls
 * pangolin_interfaces__action__PangolinAction_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_Goal__Sequence *
pangolin_interfaces__action__PangolinAction_Goal__Sequence__create(size_t size);

/// Destroy array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Goal__Sequence__destroy(pangolin_interfaces__action__PangolinAction_Goal__Sequence * array);

/// Check for action/PangolinAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Goal__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_Goal__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_Goal__Sequence * rhs);

/// Copy an array of action/PangolinAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Goal__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_Goal__Sequence * input,
  pangolin_interfaces__action__PangolinAction_Goal__Sequence * output);

/// Initialize action/PangolinAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pangolin_interfaces__action__PangolinAction_Result
 * )) before or use
 * pangolin_interfaces__action__PangolinAction_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Result__init(pangolin_interfaces__action__PangolinAction_Result * msg);

/// Finalize action/PangolinAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Result__fini(pangolin_interfaces__action__PangolinAction_Result * msg);

/// Create action/PangolinAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pangolin_interfaces__action__PangolinAction_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_Result *
pangolin_interfaces__action__PangolinAction_Result__create();

/// Destroy action/PangolinAction message.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Result__destroy(pangolin_interfaces__action__PangolinAction_Result * msg);

/// Check for action/PangolinAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Result__are_equal(const pangolin_interfaces__action__PangolinAction_Result * lhs, const pangolin_interfaces__action__PangolinAction_Result * rhs);

/// Copy a action/PangolinAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Result__copy(
  const pangolin_interfaces__action__PangolinAction_Result * input,
  pangolin_interfaces__action__PangolinAction_Result * output);

/// Initialize array of action/PangolinAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * pangolin_interfaces__action__PangolinAction_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Result__Sequence__init(pangolin_interfaces__action__PangolinAction_Result__Sequence * array, size_t size);

/// Finalize array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Result__Sequence__fini(pangolin_interfaces__action__PangolinAction_Result__Sequence * array);

/// Create array of action/PangolinAction messages.
/**
 * It allocates the memory for the array and calls
 * pangolin_interfaces__action__PangolinAction_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_Result__Sequence *
pangolin_interfaces__action__PangolinAction_Result__Sequence__create(size_t size);

/// Destroy array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Result__Sequence__destroy(pangolin_interfaces__action__PangolinAction_Result__Sequence * array);

/// Check for action/PangolinAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Result__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_Result__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_Result__Sequence * rhs);

/// Copy an array of action/PangolinAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Result__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_Result__Sequence * input,
  pangolin_interfaces__action__PangolinAction_Result__Sequence * output);

/// Initialize action/PangolinAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pangolin_interfaces__action__PangolinAction_Feedback
 * )) before or use
 * pangolin_interfaces__action__PangolinAction_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Feedback__init(pangolin_interfaces__action__PangolinAction_Feedback * msg);

/// Finalize action/PangolinAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Feedback__fini(pangolin_interfaces__action__PangolinAction_Feedback * msg);

/// Create action/PangolinAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pangolin_interfaces__action__PangolinAction_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_Feedback *
pangolin_interfaces__action__PangolinAction_Feedback__create();

/// Destroy action/PangolinAction message.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Feedback__destroy(pangolin_interfaces__action__PangolinAction_Feedback * msg);

/// Check for action/PangolinAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Feedback__are_equal(const pangolin_interfaces__action__PangolinAction_Feedback * lhs, const pangolin_interfaces__action__PangolinAction_Feedback * rhs);

/// Copy a action/PangolinAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Feedback__copy(
  const pangolin_interfaces__action__PangolinAction_Feedback * input,
  pangolin_interfaces__action__PangolinAction_Feedback * output);

/// Initialize array of action/PangolinAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * pangolin_interfaces__action__PangolinAction_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__init(pangolin_interfaces__action__PangolinAction_Feedback__Sequence * array, size_t size);

/// Finalize array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__fini(pangolin_interfaces__action__PangolinAction_Feedback__Sequence * array);

/// Create array of action/PangolinAction messages.
/**
 * It allocates the memory for the array and calls
 * pangolin_interfaces__action__PangolinAction_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_Feedback__Sequence *
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__create(size_t size);

/// Destroy array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__destroy(pangolin_interfaces__action__PangolinAction_Feedback__Sequence * array);

/// Check for action/PangolinAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_Feedback__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_Feedback__Sequence * rhs);

/// Copy an array of action/PangolinAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_Feedback__Sequence * input,
  pangolin_interfaces__action__PangolinAction_Feedback__Sequence * output);

/// Initialize action/PangolinAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pangolin_interfaces__action__PangolinAction_SendGoal_Request
 * )) before or use
 * pangolin_interfaces__action__PangolinAction_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__init(pangolin_interfaces__action__PangolinAction_SendGoal_Request * msg);

/// Finalize action/PangolinAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini(pangolin_interfaces__action__PangolinAction_SendGoal_Request * msg);

/// Create action/PangolinAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_SendGoal_Request *
pangolin_interfaces__action__PangolinAction_SendGoal_Request__create();

/// Destroy action/PangolinAction message.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_SendGoal_Request__destroy(pangolin_interfaces__action__PangolinAction_SendGoal_Request * msg);

/// Check for action/PangolinAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__are_equal(const pangolin_interfaces__action__PangolinAction_SendGoal_Request * lhs, const pangolin_interfaces__action__PangolinAction_SendGoal_Request * rhs);

/// Copy a action/PangolinAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__copy(
  const pangolin_interfaces__action__PangolinAction_SendGoal_Request * input,
  pangolin_interfaces__action__PangolinAction_SendGoal_Request * output);

/// Initialize array of action/PangolinAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__init(pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__fini(pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * array);

/// Create array of action/PangolinAction messages.
/**
 * It allocates the memory for the array and calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence *
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__destroy(pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * array);

/// Check for action/PangolinAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/PangolinAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * input,
  pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * output);

/// Initialize action/PangolinAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pangolin_interfaces__action__PangolinAction_SendGoal_Response
 * )) before or use
 * pangolin_interfaces__action__PangolinAction_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__init(pangolin_interfaces__action__PangolinAction_SendGoal_Response * msg);

/// Finalize action/PangolinAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini(pangolin_interfaces__action__PangolinAction_SendGoal_Response * msg);

/// Create action/PangolinAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_SendGoal_Response *
pangolin_interfaces__action__PangolinAction_SendGoal_Response__create();

/// Destroy action/PangolinAction message.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_SendGoal_Response__destroy(pangolin_interfaces__action__PangolinAction_SendGoal_Response * msg);

/// Check for action/PangolinAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__are_equal(const pangolin_interfaces__action__PangolinAction_SendGoal_Response * lhs, const pangolin_interfaces__action__PangolinAction_SendGoal_Response * rhs);

/// Copy a action/PangolinAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__copy(
  const pangolin_interfaces__action__PangolinAction_SendGoal_Response * input,
  pangolin_interfaces__action__PangolinAction_SendGoal_Response * output);

/// Initialize array of action/PangolinAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__init(pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__fini(pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * array);

/// Create array of action/PangolinAction messages.
/**
 * It allocates the memory for the array and calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence *
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__destroy(pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * array);

/// Check for action/PangolinAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/PangolinAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * input,
  pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * output);

/// Initialize action/PangolinAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pangolin_interfaces__action__PangolinAction_GetResult_Request
 * )) before or use
 * pangolin_interfaces__action__PangolinAction_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__init(pangolin_interfaces__action__PangolinAction_GetResult_Request * msg);

/// Finalize action/PangolinAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_GetResult_Request__fini(pangolin_interfaces__action__PangolinAction_GetResult_Request * msg);

/// Create action/PangolinAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_GetResult_Request *
pangolin_interfaces__action__PangolinAction_GetResult_Request__create();

/// Destroy action/PangolinAction message.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_GetResult_Request__destroy(pangolin_interfaces__action__PangolinAction_GetResult_Request * msg);

/// Check for action/PangolinAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__are_equal(const pangolin_interfaces__action__PangolinAction_GetResult_Request * lhs, const pangolin_interfaces__action__PangolinAction_GetResult_Request * rhs);

/// Copy a action/PangolinAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__copy(
  const pangolin_interfaces__action__PangolinAction_GetResult_Request * input,
  pangolin_interfaces__action__PangolinAction_GetResult_Request * output);

/// Initialize array of action/PangolinAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__init(pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__fini(pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * array);

/// Create array of action/PangolinAction messages.
/**
 * It allocates the memory for the array and calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence *
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__destroy(pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * array);

/// Check for action/PangolinAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * rhs);

/// Copy an array of action/PangolinAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * input,
  pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * output);

/// Initialize action/PangolinAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pangolin_interfaces__action__PangolinAction_GetResult_Response
 * )) before or use
 * pangolin_interfaces__action__PangolinAction_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__init(pangolin_interfaces__action__PangolinAction_GetResult_Response * msg);

/// Finalize action/PangolinAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_GetResult_Response__fini(pangolin_interfaces__action__PangolinAction_GetResult_Response * msg);

/// Create action/PangolinAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_GetResult_Response *
pangolin_interfaces__action__PangolinAction_GetResult_Response__create();

/// Destroy action/PangolinAction message.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_GetResult_Response__destroy(pangolin_interfaces__action__PangolinAction_GetResult_Response * msg);

/// Check for action/PangolinAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__are_equal(const pangolin_interfaces__action__PangolinAction_GetResult_Response * lhs, const pangolin_interfaces__action__PangolinAction_GetResult_Response * rhs);

/// Copy a action/PangolinAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__copy(
  const pangolin_interfaces__action__PangolinAction_GetResult_Response * input,
  pangolin_interfaces__action__PangolinAction_GetResult_Response * output);

/// Initialize array of action/PangolinAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__init(pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__fini(pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * array);

/// Create array of action/PangolinAction messages.
/**
 * It allocates the memory for the array and calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence *
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__destroy(pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * array);

/// Check for action/PangolinAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * rhs);

/// Copy an array of action/PangolinAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * input,
  pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * output);

/// Initialize action/PangolinAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pangolin_interfaces__action__PangolinAction_FeedbackMessage
 * )) before or use
 * pangolin_interfaces__action__PangolinAction_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__init(pangolin_interfaces__action__PangolinAction_FeedbackMessage * msg);

/// Finalize action/PangolinAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini(pangolin_interfaces__action__PangolinAction_FeedbackMessage * msg);

/// Create action/PangolinAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pangolin_interfaces__action__PangolinAction_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_FeedbackMessage *
pangolin_interfaces__action__PangolinAction_FeedbackMessage__create();

/// Destroy action/PangolinAction message.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_FeedbackMessage__destroy(pangolin_interfaces__action__PangolinAction_FeedbackMessage * msg);

/// Check for action/PangolinAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__are_equal(const pangolin_interfaces__action__PangolinAction_FeedbackMessage * lhs, const pangolin_interfaces__action__PangolinAction_FeedbackMessage * rhs);

/// Copy a action/PangolinAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__copy(
  const pangolin_interfaces__action__PangolinAction_FeedbackMessage * input,
  pangolin_interfaces__action__PangolinAction_FeedbackMessage * output);

/// Initialize array of action/PangolinAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * pangolin_interfaces__action__PangolinAction_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__init(pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__fini(pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * array);

/// Create array of action/PangolinAction messages.
/**
 * It allocates the memory for the array and calls
 * pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence *
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/PangolinAction messages.
/**
 * It calls
 * pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
void
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__destroy(pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * array);

/// Check for action/PangolinAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/PangolinAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pangolin_interfaces
bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * input,
  pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__FUNCTIONS_H_
