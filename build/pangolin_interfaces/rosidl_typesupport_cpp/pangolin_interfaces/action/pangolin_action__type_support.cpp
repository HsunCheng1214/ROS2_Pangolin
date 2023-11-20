// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pangolin_interfaces:action/PangolinAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_Goal_type_support_ids_t;

static const _PangolinAction_Goal_type_support_ids_t _PangolinAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_Goal_type_support_symbol_names_t _PangolinAction_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_Goal)),
  }
};

typedef struct _PangolinAction_Goal_type_support_data_t
{
  void * data[2];
} _PangolinAction_Goal_type_support_data_t;

static _PangolinAction_Goal_type_support_data_t _PangolinAction_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_Goal_message_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PangolinAction_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_Goal>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_Goal)() {
  return get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_Result_type_support_ids_t;

static const _PangolinAction_Result_type_support_ids_t _PangolinAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_Result_type_support_symbol_names_t _PangolinAction_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_Result)),
  }
};

typedef struct _PangolinAction_Result_type_support_data_t
{
  void * data[2];
} _PangolinAction_Result_type_support_data_t;

static _PangolinAction_Result_type_support_data_t _PangolinAction_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_Result_message_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PangolinAction_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_Result>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_Result)() {
  return get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_Feedback_type_support_ids_t;

static const _PangolinAction_Feedback_type_support_ids_t _PangolinAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_Feedback_type_support_symbol_names_t _PangolinAction_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_Feedback)),
  }
};

typedef struct _PangolinAction_Feedback_type_support_data_t
{
  void * data[2];
} _PangolinAction_Feedback_type_support_data_t;

static _PangolinAction_Feedback_type_support_data_t _PangolinAction_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_Feedback_message_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PangolinAction_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_Feedback>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_Feedback)() {
  return get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_SendGoal_Request_type_support_ids_t;

static const _PangolinAction_SendGoal_Request_type_support_ids_t _PangolinAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_SendGoal_Request_type_support_symbol_names_t _PangolinAction_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_SendGoal_Request)),
  }
};

typedef struct _PangolinAction_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PangolinAction_SendGoal_Request_type_support_data_t;

static _PangolinAction_SendGoal_Request_type_support_data_t _PangolinAction_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_SendGoal_Request_message_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PangolinAction_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_SendGoal_Request>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_SendGoal_Request)() {
  return get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_SendGoal_Response_type_support_ids_t;

static const _PangolinAction_SendGoal_Response_type_support_ids_t _PangolinAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_SendGoal_Response_type_support_symbol_names_t _PangolinAction_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_SendGoal_Response)),
  }
};

typedef struct _PangolinAction_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PangolinAction_SendGoal_Response_type_support_data_t;

static _PangolinAction_SendGoal_Response_type_support_data_t _PangolinAction_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_SendGoal_Response_message_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PangolinAction_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_SendGoal_Response>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_SendGoal_Response)() {
  return get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_SendGoal_type_support_ids_t;

static const _PangolinAction_SendGoal_type_support_ids_t _PangolinAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_SendGoal_type_support_symbol_names_t _PangolinAction_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_SendGoal)),
  }
};

typedef struct _PangolinAction_SendGoal_type_support_data_t
{
  void * data[2];
} _PangolinAction_SendGoal_type_support_data_t;

static _PangolinAction_SendGoal_type_support_data_t _PangolinAction_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_SendGoal_service_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PangolinAction_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pangolin_interfaces::action::PangolinAction_SendGoal>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<pangolin_interfaces::action::PangolinAction_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_GetResult_Request_type_support_ids_t;

static const _PangolinAction_GetResult_Request_type_support_ids_t _PangolinAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_GetResult_Request_type_support_symbol_names_t _PangolinAction_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_GetResult_Request)),
  }
};

typedef struct _PangolinAction_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PangolinAction_GetResult_Request_type_support_data_t;

static _PangolinAction_GetResult_Request_type_support_data_t _PangolinAction_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_GetResult_Request_message_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PangolinAction_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_GetResult_Request>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_GetResult_Request)() {
  return get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_GetResult_Response_type_support_ids_t;

static const _PangolinAction_GetResult_Response_type_support_ids_t _PangolinAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_GetResult_Response_type_support_symbol_names_t _PangolinAction_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_GetResult_Response)),
  }
};

typedef struct _PangolinAction_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PangolinAction_GetResult_Response_type_support_data_t;

static _PangolinAction_GetResult_Response_type_support_data_t _PangolinAction_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_GetResult_Response_message_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PangolinAction_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_GetResult_Response>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_GetResult_Response)() {
  return get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_GetResult_type_support_ids_t;

static const _PangolinAction_GetResult_type_support_ids_t _PangolinAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_GetResult_type_support_symbol_names_t _PangolinAction_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_GetResult)),
  }
};

typedef struct _PangolinAction_GetResult_type_support_data_t
{
  void * data[2];
} _PangolinAction_GetResult_type_support_data_t;

static _PangolinAction_GetResult_type_support_data_t _PangolinAction_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_GetResult_service_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PangolinAction_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pangolin_interfaces::action::PangolinAction_GetResult>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<pangolin_interfaces::action::PangolinAction_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PangolinAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PangolinAction_FeedbackMessage_type_support_ids_t;

static const _PangolinAction_FeedbackMessage_type_support_ids_t _PangolinAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PangolinAction_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PangolinAction_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PangolinAction_FeedbackMessage_type_support_symbol_names_t _PangolinAction_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pangolin_interfaces, action, PangolinAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pangolin_interfaces, action, PangolinAction_FeedbackMessage)),
  }
};

typedef struct _PangolinAction_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PangolinAction_FeedbackMessage_type_support_data_t;

static _PangolinAction_FeedbackMessage_type_support_data_t _PangolinAction_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PangolinAction_FeedbackMessage_message_typesupport_map = {
  2,
  "pangolin_interfaces",
  &_PangolinAction_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PangolinAction_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PangolinAction_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PangolinAction_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PangolinAction_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_FeedbackMessage>()
{
  return &::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction_FeedbackMessage)() {
  return get_message_type_support_handle<pangolin_interfaces::action::PangolinAction_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace pangolin_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t PangolinAction_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pangolin_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<pangolin_interfaces::action::PangolinAction>()
{
  using ::pangolin_interfaces::action::rosidl_typesupport_cpp::PangolinAction_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PangolinAction_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::pangolin_interfaces::action::PangolinAction::Impl::SendGoalService>();
  PangolinAction_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::pangolin_interfaces::action::PangolinAction::Impl::GetResultService>();
  PangolinAction_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::pangolin_interfaces::action::PangolinAction::Impl::CancelGoalService>();
  PangolinAction_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::pangolin_interfaces::action::PangolinAction::Impl::FeedbackMessage>();
  PangolinAction_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::pangolin_interfaces::action::PangolinAction::Impl::GoalStatusMessage>();
  return &PangolinAction_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, pangolin_interfaces, action, PangolinAction)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<pangolin_interfaces::action::PangolinAction>();
}

#ifdef __cplusplus
}
#endif
