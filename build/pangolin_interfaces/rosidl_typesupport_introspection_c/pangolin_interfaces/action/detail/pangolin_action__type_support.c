// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pangolin_interfaces:action/PangolinAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
#include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pangolin_interfaces/action/detail/pangolin_action__functions.h"
#include "pangolin_interfaces/action/detail/pangolin_action__struct.h"


// Include directives for member types
// Member `act_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pangolin_interfaces__action__PangolinAction_Goal__init(message_memory);
}

void PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_fini_function(void * message_memory)
{
  pangolin_interfaces__action__PangolinAction_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_message_member_array[1] = {
  {
    "act_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_Goal, act_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_message_members = {
  "pangolin_interfaces__action",  // message namespace
  "PangolinAction_Goal",  // message name
  1,  // number of fields
  sizeof(pangolin_interfaces__action__PangolinAction_Goal),
  PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_message_member_array,  // message members
  PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_message_type_support_handle = {
  0,
  &PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_Goal)() {
  if (!PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_message_type_support_handle.typesupport_identifier) {
    PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PangolinAction_Goal__rosidl_typesupport_introspection_c__PangolinAction_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pangolin_interfaces__action__PangolinAction_Result__init(message_memory);
}

void PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_fini_function(void * message_memory)
{
  pangolin_interfaces__action__PangolinAction_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_message_members = {
  "pangolin_interfaces__action",  // message namespace
  "PangolinAction_Result",  // message name
  1,  // number of fields
  sizeof(pangolin_interfaces__action__PangolinAction_Result),
  PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_message_member_array,  // message members
  PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_message_type_support_handle = {
  0,
  &PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_Result)() {
  if (!PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_message_type_support_handle.typesupport_identifier) {
    PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PangolinAction_Result__rosidl_typesupport_introspection_c__PangolinAction_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pangolin_interfaces__action__PangolinAction_Feedback__init(message_memory);
}

void PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_fini_function(void * message_memory)
{
  pangolin_interfaces__action__PangolinAction_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_message_member_array[1] = {
  {
    "which_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_Feedback, which_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_message_members = {
  "pangolin_interfaces__action",  // message namespace
  "PangolinAction_Feedback",  // message name
  1,  // number of fields
  sizeof(pangolin_interfaces__action__PangolinAction_Feedback),
  PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_message_member_array,  // message members
  PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_message_type_support_handle = {
  0,
  &PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_Feedback)() {
  if (!PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_message_type_support_handle.typesupport_identifier) {
    PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PangolinAction_Feedback__rosidl_typesupport_introspection_c__PangolinAction_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "pangolin_interfaces/action/pangolin_action.h"
// Member `goal`
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pangolin_interfaces__action__PangolinAction_SendGoal_Request__init(message_memory);
}

void PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_fini_function(void * message_memory)
{
  pangolin_interfaces__action__PangolinAction_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_members = {
  "pangolin_interfaces__action",  // message namespace
  "PangolinAction_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Request),
  PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_member_array,  // message members
  PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_type_support_handle = {
  0,
  &PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_SendGoal_Request)() {
  PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_Goal)();
  if (!PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PangolinAction_SendGoal_Request__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pangolin_interfaces__action__PangolinAction_SendGoal_Response__init(message_memory);
}

void PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_fini_function(void * message_memory)
{
  pangolin_interfaces__action__PangolinAction_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_members = {
  "pangolin_interfaces__action",  // message namespace
  "PangolinAction_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(pangolin_interfaces__action__PangolinAction_SendGoal_Response),
  PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_member_array,  // message members
  PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_type_support_handle = {
  0,
  &PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_SendGoal_Response)() {
  PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PangolinAction_SendGoal_Response__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_service_members = {
  "pangolin_interfaces__action",  // service namespace
  "PangolinAction_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_service_type_support_handle = {
  0,
  &pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_SendGoal)() {
  if (!pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_service_type_support_handle.typesupport_identifier) {
    pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_SendGoal_Response)()->data;
  }

  return &pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pangolin_interfaces__action__PangolinAction_GetResult_Request__init(message_memory);
}

void PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_fini_function(void * message_memory)
{
  pangolin_interfaces__action__PangolinAction_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_members = {
  "pangolin_interfaces__action",  // message namespace
  "PangolinAction_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Request),
  PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_member_array,  // message members
  PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_type_support_handle = {
  0,
  &PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_GetResult_Request)() {
  PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PangolinAction_GetResult_Request__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "pangolin_interfaces/action/pangolin_action.h"
// Member `result`
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pangolin_interfaces__action__PangolinAction_GetResult_Response__init(message_memory);
}

void PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_fini_function(void * message_memory)
{
  pangolin_interfaces__action__PangolinAction_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_members = {
  "pangolin_interfaces__action",  // message namespace
  "PangolinAction_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(pangolin_interfaces__action__PangolinAction_GetResult_Response),
  PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_member_array,  // message members
  PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_type_support_handle = {
  0,
  &PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_GetResult_Response)() {
  PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_Result)();
  if (!PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PangolinAction_GetResult_Response__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_GetResult_service_members = {
  "pangolin_interfaces__action",  // service namespace
  "PangolinAction_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_GetResult_service_type_support_handle = {
  0,
  &pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_GetResult)() {
  if (!pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_GetResult_service_type_support_handle.typesupport_identifier) {
    pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_GetResult_Response)()->data;
  }

  return &pangolin_interfaces__action__detail__pangolin_action__rosidl_typesupport_introspection_c__PangolinAction_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pangolin_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__functions.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "pangolin_interfaces/action/pangolin_action.h"
// Member `feedback`
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pangolin_interfaces__action__PangolinAction_FeedbackMessage__init(message_memory);
}

void PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_fini_function(void * message_memory)
{
  pangolin_interfaces__action__PangolinAction_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pangolin_interfaces__action__PangolinAction_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_members = {
  "pangolin_interfaces__action",  // message namespace
  "PangolinAction_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(pangolin_interfaces__action__PangolinAction_FeedbackMessage),
  PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_member_array,  // message members
  PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_type_support_handle = {
  0,
  &PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pangolin_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_FeedbackMessage)() {
  PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pangolin_interfaces, action, PangolinAction_Feedback)();
  if (!PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PangolinAction_FeedbackMessage__rosidl_typesupport_introspection_c__PangolinAction_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
