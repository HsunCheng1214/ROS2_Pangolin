// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pangolin_interfaces:action/PangolinAction.idl
// generated code does not contain a copyright notice

#ifndef PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__STRUCT_H_
#define PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'act_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/PangolinAction in the package pangolin_interfaces.
typedef struct pangolin_interfaces__action__PangolinAction_Goal
{
  rosidl_runtime_c__String act_name;
} pangolin_interfaces__action__PangolinAction_Goal;

// Struct for a sequence of pangolin_interfaces__action__PangolinAction_Goal.
typedef struct pangolin_interfaces__action__PangolinAction_Goal__Sequence
{
  pangolin_interfaces__action__PangolinAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pangolin_interfaces__action__PangolinAction_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/PangolinAction in the package pangolin_interfaces.
typedef struct pangolin_interfaces__action__PangolinAction_Result
{
  bool success;
} pangolin_interfaces__action__PangolinAction_Result;

// Struct for a sequence of pangolin_interfaces__action__PangolinAction_Result.
typedef struct pangolin_interfaces__action__PangolinAction_Result__Sequence
{
  pangolin_interfaces__action__PangolinAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pangolin_interfaces__action__PangolinAction_Result__Sequence;


// Constants defined in the message

// Struct defined in action/PangolinAction in the package pangolin_interfaces.
typedef struct pangolin_interfaces__action__PangolinAction_Feedback
{
  int32_t which_action;
} pangolin_interfaces__action__PangolinAction_Feedback;

// Struct for a sequence of pangolin_interfaces__action__PangolinAction_Feedback.
typedef struct pangolin_interfaces__action__PangolinAction_Feedback__Sequence
{
  pangolin_interfaces__action__PangolinAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pangolin_interfaces__action__PangolinAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pangolin_interfaces/action/detail/pangolin_action__struct.h"

// Struct defined in action/PangolinAction in the package pangolin_interfaces.
typedef struct pangolin_interfaces__action__PangolinAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pangolin_interfaces__action__PangolinAction_Goal goal;
} pangolin_interfaces__action__PangolinAction_SendGoal_Request;

// Struct for a sequence of pangolin_interfaces__action__PangolinAction_SendGoal_Request.
typedef struct pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence
{
  pangolin_interfaces__action__PangolinAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pangolin_interfaces__action__PangolinAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/PangolinAction in the package pangolin_interfaces.
typedef struct pangolin_interfaces__action__PangolinAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pangolin_interfaces__action__PangolinAction_SendGoal_Response;

// Struct for a sequence of pangolin_interfaces__action__PangolinAction_SendGoal_Response.
typedef struct pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence
{
  pangolin_interfaces__action__PangolinAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pangolin_interfaces__action__PangolinAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/PangolinAction in the package pangolin_interfaces.
typedef struct pangolin_interfaces__action__PangolinAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pangolin_interfaces__action__PangolinAction_GetResult_Request;

// Struct for a sequence of pangolin_interfaces__action__PangolinAction_GetResult_Request.
typedef struct pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence
{
  pangolin_interfaces__action__PangolinAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pangolin_interfaces__action__PangolinAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.h"

// Struct defined in action/PangolinAction in the package pangolin_interfaces.
typedef struct pangolin_interfaces__action__PangolinAction_GetResult_Response
{
  int8_t status;
  pangolin_interfaces__action__PangolinAction_Result result;
} pangolin_interfaces__action__PangolinAction_GetResult_Response;

// Struct for a sequence of pangolin_interfaces__action__PangolinAction_GetResult_Response.
typedef struct pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence
{
  pangolin_interfaces__action__PangolinAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pangolin_interfaces__action__PangolinAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.h"

// Struct defined in action/PangolinAction in the package pangolin_interfaces.
typedef struct pangolin_interfaces__action__PangolinAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pangolin_interfaces__action__PangolinAction_Feedback feedback;
} pangolin_interfaces__action__PangolinAction_FeedbackMessage;

// Struct for a sequence of pangolin_interfaces__action__PangolinAction_FeedbackMessage.
typedef struct pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence
{
  pangolin_interfaces__action__PangolinAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pangolin_interfaces__action__PangolinAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__STRUCT_H_
