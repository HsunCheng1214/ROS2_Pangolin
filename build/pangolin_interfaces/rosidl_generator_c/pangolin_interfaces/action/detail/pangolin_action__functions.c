// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pangolin_interfaces:action/PangolinAction.idl
// generated code does not contain a copyright notice
#include "pangolin_interfaces/action/detail/pangolin_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `act_name`
#include "rosidl_runtime_c/string_functions.h"

bool
pangolin_interfaces__action__PangolinAction_Goal__init(pangolin_interfaces__action__PangolinAction_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // act_name
  if (!rosidl_runtime_c__String__init(&msg->act_name)) {
    pangolin_interfaces__action__PangolinAction_Goal__fini(msg);
    return false;
  }
  return true;
}

void
pangolin_interfaces__action__PangolinAction_Goal__fini(pangolin_interfaces__action__PangolinAction_Goal * msg)
{
  if (!msg) {
    return;
  }
  // act_name
  rosidl_runtime_c__String__fini(&msg->act_name);
}

bool
pangolin_interfaces__action__PangolinAction_Goal__are_equal(const pangolin_interfaces__action__PangolinAction_Goal * lhs, const pangolin_interfaces__action__PangolinAction_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // act_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->act_name), &(rhs->act_name)))
  {
    return false;
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_Goal__copy(
  const pangolin_interfaces__action__PangolinAction_Goal * input,
  pangolin_interfaces__action__PangolinAction_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // act_name
  if (!rosidl_runtime_c__String__copy(
      &(input->act_name), &(output->act_name)))
  {
    return false;
  }
  return true;
}

pangolin_interfaces__action__PangolinAction_Goal *
pangolin_interfaces__action__PangolinAction_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_Goal * msg = (pangolin_interfaces__action__PangolinAction_Goal *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pangolin_interfaces__action__PangolinAction_Goal));
  bool success = pangolin_interfaces__action__PangolinAction_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pangolin_interfaces__action__PangolinAction_Goal__destroy(pangolin_interfaces__action__PangolinAction_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pangolin_interfaces__action__PangolinAction_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pangolin_interfaces__action__PangolinAction_Goal__Sequence__init(pangolin_interfaces__action__PangolinAction_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_Goal * data = NULL;

  if (size) {
    data = (pangolin_interfaces__action__PangolinAction_Goal *)allocator.zero_allocate(size, sizeof(pangolin_interfaces__action__PangolinAction_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pangolin_interfaces__action__PangolinAction_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pangolin_interfaces__action__PangolinAction_Goal__fini(&data[i - 1]);
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
pangolin_interfaces__action__PangolinAction_Goal__Sequence__fini(pangolin_interfaces__action__PangolinAction_Goal__Sequence * array)
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
      pangolin_interfaces__action__PangolinAction_Goal__fini(&array->data[i]);
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

pangolin_interfaces__action__PangolinAction_Goal__Sequence *
pangolin_interfaces__action__PangolinAction_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_Goal__Sequence * array = (pangolin_interfaces__action__PangolinAction_Goal__Sequence *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pangolin_interfaces__action__PangolinAction_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pangolin_interfaces__action__PangolinAction_Goal__Sequence__destroy(pangolin_interfaces__action__PangolinAction_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pangolin_interfaces__action__PangolinAction_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pangolin_interfaces__action__PangolinAction_Goal__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_Goal__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_Goal__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_Goal__Sequence * input,
  pangolin_interfaces__action__PangolinAction_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pangolin_interfaces__action__PangolinAction_Goal);
    pangolin_interfaces__action__PangolinAction_Goal * data =
      (pangolin_interfaces__action__PangolinAction_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pangolin_interfaces__action__PangolinAction_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pangolin_interfaces__action__PangolinAction_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pangolin_interfaces__action__PangolinAction_Result__init(pangolin_interfaces__action__PangolinAction_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
pangolin_interfaces__action__PangolinAction_Result__fini(pangolin_interfaces__action__PangolinAction_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
pangolin_interfaces__action__PangolinAction_Result__are_equal(const pangolin_interfaces__action__PangolinAction_Result * lhs, const pangolin_interfaces__action__PangolinAction_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_Result__copy(
  const pangolin_interfaces__action__PangolinAction_Result * input,
  pangolin_interfaces__action__PangolinAction_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

pangolin_interfaces__action__PangolinAction_Result *
pangolin_interfaces__action__PangolinAction_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_Result * msg = (pangolin_interfaces__action__PangolinAction_Result *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pangolin_interfaces__action__PangolinAction_Result));
  bool success = pangolin_interfaces__action__PangolinAction_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pangolin_interfaces__action__PangolinAction_Result__destroy(pangolin_interfaces__action__PangolinAction_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pangolin_interfaces__action__PangolinAction_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pangolin_interfaces__action__PangolinAction_Result__Sequence__init(pangolin_interfaces__action__PangolinAction_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_Result * data = NULL;

  if (size) {
    data = (pangolin_interfaces__action__PangolinAction_Result *)allocator.zero_allocate(size, sizeof(pangolin_interfaces__action__PangolinAction_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pangolin_interfaces__action__PangolinAction_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pangolin_interfaces__action__PangolinAction_Result__fini(&data[i - 1]);
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
pangolin_interfaces__action__PangolinAction_Result__Sequence__fini(pangolin_interfaces__action__PangolinAction_Result__Sequence * array)
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
      pangolin_interfaces__action__PangolinAction_Result__fini(&array->data[i]);
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

pangolin_interfaces__action__PangolinAction_Result__Sequence *
pangolin_interfaces__action__PangolinAction_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_Result__Sequence * array = (pangolin_interfaces__action__PangolinAction_Result__Sequence *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pangolin_interfaces__action__PangolinAction_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pangolin_interfaces__action__PangolinAction_Result__Sequence__destroy(pangolin_interfaces__action__PangolinAction_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pangolin_interfaces__action__PangolinAction_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pangolin_interfaces__action__PangolinAction_Result__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_Result__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_Result__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_Result__Sequence * input,
  pangolin_interfaces__action__PangolinAction_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pangolin_interfaces__action__PangolinAction_Result);
    pangolin_interfaces__action__PangolinAction_Result * data =
      (pangolin_interfaces__action__PangolinAction_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pangolin_interfaces__action__PangolinAction_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pangolin_interfaces__action__PangolinAction_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pangolin_interfaces__action__PangolinAction_Feedback__init(pangolin_interfaces__action__PangolinAction_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // which_action
  return true;
}

void
pangolin_interfaces__action__PangolinAction_Feedback__fini(pangolin_interfaces__action__PangolinAction_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // which_action
}

bool
pangolin_interfaces__action__PangolinAction_Feedback__are_equal(const pangolin_interfaces__action__PangolinAction_Feedback * lhs, const pangolin_interfaces__action__PangolinAction_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // which_action
  if (lhs->which_action != rhs->which_action) {
    return false;
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_Feedback__copy(
  const pangolin_interfaces__action__PangolinAction_Feedback * input,
  pangolin_interfaces__action__PangolinAction_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // which_action
  output->which_action = input->which_action;
  return true;
}

pangolin_interfaces__action__PangolinAction_Feedback *
pangolin_interfaces__action__PangolinAction_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_Feedback * msg = (pangolin_interfaces__action__PangolinAction_Feedback *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pangolin_interfaces__action__PangolinAction_Feedback));
  bool success = pangolin_interfaces__action__PangolinAction_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pangolin_interfaces__action__PangolinAction_Feedback__destroy(pangolin_interfaces__action__PangolinAction_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pangolin_interfaces__action__PangolinAction_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__init(pangolin_interfaces__action__PangolinAction_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_Feedback * data = NULL;

  if (size) {
    data = (pangolin_interfaces__action__PangolinAction_Feedback *)allocator.zero_allocate(size, sizeof(pangolin_interfaces__action__PangolinAction_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pangolin_interfaces__action__PangolinAction_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pangolin_interfaces__action__PangolinAction_Feedback__fini(&data[i - 1]);
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
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__fini(pangolin_interfaces__action__PangolinAction_Feedback__Sequence * array)
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
      pangolin_interfaces__action__PangolinAction_Feedback__fini(&array->data[i]);
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

pangolin_interfaces__action__PangolinAction_Feedback__Sequence *
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_Feedback__Sequence * array = (pangolin_interfaces__action__PangolinAction_Feedback__Sequence *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pangolin_interfaces__action__PangolinAction_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__destroy(pangolin_interfaces__action__PangolinAction_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pangolin_interfaces__action__PangolinAction_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_Feedback__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_Feedback__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_Feedback__Sequence * input,
  pangolin_interfaces__action__PangolinAction_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pangolin_interfaces__action__PangolinAction_Feedback);
    pangolin_interfaces__action__PangolinAction_Feedback * data =
      (pangolin_interfaces__action__PangolinAction_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pangolin_interfaces__action__PangolinAction_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pangolin_interfaces__action__PangolinAction_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__init(pangolin_interfaces__action__PangolinAction_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!pangolin_interfaces__action__PangolinAction_Goal__init(&msg->goal)) {
    pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini(pangolin_interfaces__action__PangolinAction_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  pangolin_interfaces__action__PangolinAction_Goal__fini(&msg->goal);
}

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__are_equal(const pangolin_interfaces__action__PangolinAction_SendGoal_Request * lhs, const pangolin_interfaces__action__PangolinAction_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!pangolin_interfaces__action__PangolinAction_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__copy(
  const pangolin_interfaces__action__PangolinAction_SendGoal_Request * input,
  pangolin_interfaces__action__PangolinAction_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!pangolin_interfaces__action__PangolinAction_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

pangolin_interfaces__action__PangolinAction_SendGoal_Request *
pangolin_interfaces__action__PangolinAction_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_SendGoal_Request * msg = (pangolin_interfaces__action__PangolinAction_SendGoal_Request *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Request));
  bool success = pangolin_interfaces__action__PangolinAction_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pangolin_interfaces__action__PangolinAction_SendGoal_Request__destroy(pangolin_interfaces__action__PangolinAction_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__init(pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_SendGoal_Request * data = NULL;

  if (size) {
    data = (pangolin_interfaces__action__PangolinAction_SendGoal_Request *)allocator.zero_allocate(size, sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pangolin_interfaces__action__PangolinAction_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini(&data[i - 1]);
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
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__fini(pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * array)
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
      pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini(&array->data[i]);
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

pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence *
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * array = (pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__destroy(pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * input,
  pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Request);
    pangolin_interfaces__action__PangolinAction_SendGoal_Request * data =
      (pangolin_interfaces__action__PangolinAction_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pangolin_interfaces__action__PangolinAction_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__init(pangolin_interfaces__action__PangolinAction_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini(pangolin_interfaces__action__PangolinAction_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__are_equal(const pangolin_interfaces__action__PangolinAction_SendGoal_Response * lhs, const pangolin_interfaces__action__PangolinAction_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__copy(
  const pangolin_interfaces__action__PangolinAction_SendGoal_Response * input,
  pangolin_interfaces__action__PangolinAction_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

pangolin_interfaces__action__PangolinAction_SendGoal_Response *
pangolin_interfaces__action__PangolinAction_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_SendGoal_Response * msg = (pangolin_interfaces__action__PangolinAction_SendGoal_Response *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Response));
  bool success = pangolin_interfaces__action__PangolinAction_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pangolin_interfaces__action__PangolinAction_SendGoal_Response__destroy(pangolin_interfaces__action__PangolinAction_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__init(pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_SendGoal_Response * data = NULL;

  if (size) {
    data = (pangolin_interfaces__action__PangolinAction_SendGoal_Response *)allocator.zero_allocate(size, sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pangolin_interfaces__action__PangolinAction_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini(&data[i - 1]);
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
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__fini(pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * array)
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
      pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini(&array->data[i]);
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

pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence *
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * array = (pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__destroy(pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * input,
  pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Response);
    pangolin_interfaces__action__PangolinAction_SendGoal_Response * data =
      (pangolin_interfaces__action__PangolinAction_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pangolin_interfaces__action__PangolinAction_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__init(pangolin_interfaces__action__PangolinAction_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pangolin_interfaces__action__PangolinAction_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
pangolin_interfaces__action__PangolinAction_GetResult_Request__fini(pangolin_interfaces__action__PangolinAction_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__are_equal(const pangolin_interfaces__action__PangolinAction_GetResult_Request * lhs, const pangolin_interfaces__action__PangolinAction_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__copy(
  const pangolin_interfaces__action__PangolinAction_GetResult_Request * input,
  pangolin_interfaces__action__PangolinAction_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

pangolin_interfaces__action__PangolinAction_GetResult_Request *
pangolin_interfaces__action__PangolinAction_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_GetResult_Request * msg = (pangolin_interfaces__action__PangolinAction_GetResult_Request *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Request));
  bool success = pangolin_interfaces__action__PangolinAction_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pangolin_interfaces__action__PangolinAction_GetResult_Request__destroy(pangolin_interfaces__action__PangolinAction_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pangolin_interfaces__action__PangolinAction_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__init(pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_GetResult_Request * data = NULL;

  if (size) {
    data = (pangolin_interfaces__action__PangolinAction_GetResult_Request *)allocator.zero_allocate(size, sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pangolin_interfaces__action__PangolinAction_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pangolin_interfaces__action__PangolinAction_GetResult_Request__fini(&data[i - 1]);
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
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__fini(pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * array)
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
      pangolin_interfaces__action__PangolinAction_GetResult_Request__fini(&array->data[i]);
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

pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence *
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * array = (pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__destroy(pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * input,
  pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Request);
    pangolin_interfaces__action__PangolinAction_GetResult_Request * data =
      (pangolin_interfaces__action__PangolinAction_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pangolin_interfaces__action__PangolinAction_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pangolin_interfaces__action__PangolinAction_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"

bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__init(pangolin_interfaces__action__PangolinAction_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!pangolin_interfaces__action__PangolinAction_Result__init(&msg->result)) {
    pangolin_interfaces__action__PangolinAction_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
pangolin_interfaces__action__PangolinAction_GetResult_Response__fini(pangolin_interfaces__action__PangolinAction_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  pangolin_interfaces__action__PangolinAction_Result__fini(&msg->result);
}

bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__are_equal(const pangolin_interfaces__action__PangolinAction_GetResult_Response * lhs, const pangolin_interfaces__action__PangolinAction_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!pangolin_interfaces__action__PangolinAction_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__copy(
  const pangolin_interfaces__action__PangolinAction_GetResult_Response * input,
  pangolin_interfaces__action__PangolinAction_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!pangolin_interfaces__action__PangolinAction_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

pangolin_interfaces__action__PangolinAction_GetResult_Response *
pangolin_interfaces__action__PangolinAction_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_GetResult_Response * msg = (pangolin_interfaces__action__PangolinAction_GetResult_Response *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Response));
  bool success = pangolin_interfaces__action__PangolinAction_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pangolin_interfaces__action__PangolinAction_GetResult_Response__destroy(pangolin_interfaces__action__PangolinAction_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pangolin_interfaces__action__PangolinAction_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__init(pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_GetResult_Response * data = NULL;

  if (size) {
    data = (pangolin_interfaces__action__PangolinAction_GetResult_Response *)allocator.zero_allocate(size, sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pangolin_interfaces__action__PangolinAction_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pangolin_interfaces__action__PangolinAction_GetResult_Response__fini(&data[i - 1]);
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
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__fini(pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * array)
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
      pangolin_interfaces__action__PangolinAction_GetResult_Response__fini(&array->data[i]);
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

pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence *
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * array = (pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__destroy(pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * input,
  pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Response);
    pangolin_interfaces__action__PangolinAction_GetResult_Response * data =
      (pangolin_interfaces__action__PangolinAction_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pangolin_interfaces__action__PangolinAction_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pangolin_interfaces__action__PangolinAction_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"

bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__init(pangolin_interfaces__action__PangolinAction_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!pangolin_interfaces__action__PangolinAction_Feedback__init(&msg->feedback)) {
    pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini(pangolin_interfaces__action__PangolinAction_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  pangolin_interfaces__action__PangolinAction_Feedback__fini(&msg->feedback);
}

bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__are_equal(const pangolin_interfaces__action__PangolinAction_FeedbackMessage * lhs, const pangolin_interfaces__action__PangolinAction_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pangolin_interfaces__action__PangolinAction_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__copy(
  const pangolin_interfaces__action__PangolinAction_FeedbackMessage * input,
  pangolin_interfaces__action__PangolinAction_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pangolin_interfaces__action__PangolinAction_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

pangolin_interfaces__action__PangolinAction_FeedbackMessage *
pangolin_interfaces__action__PangolinAction_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_FeedbackMessage * msg = (pangolin_interfaces__action__PangolinAction_FeedbackMessage *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pangolin_interfaces__action__PangolinAction_FeedbackMessage));
  bool success = pangolin_interfaces__action__PangolinAction_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pangolin_interfaces__action__PangolinAction_FeedbackMessage__destroy(pangolin_interfaces__action__PangolinAction_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__init(pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_FeedbackMessage * data = NULL;

  if (size) {
    data = (pangolin_interfaces__action__PangolinAction_FeedbackMessage *)allocator.zero_allocate(size, sizeof(pangolin_interfaces__action__PangolinAction_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pangolin_interfaces__action__PangolinAction_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini(&data[i - 1]);
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
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__fini(pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * array)
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
      pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini(&array->data[i]);
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

pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence *
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * array = (pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence *)allocator.allocate(sizeof(pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__destroy(pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__are_equal(const pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * lhs, const pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence__copy(
  const pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * input,
  pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pangolin_interfaces__action__PangolinAction_FeedbackMessage);
    pangolin_interfaces__action__PangolinAction_FeedbackMessage * data =
      (pangolin_interfaces__action__PangolinAction_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pangolin_interfaces__action__PangolinAction_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pangolin_interfaces__action__PangolinAction_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
