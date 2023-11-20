// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pangolin_interfaces:action/PangolinAction.idl
// generated code does not contain a copyright notice

#ifndef PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__STRUCT_HPP_
#define PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_Goal __attribute__((deprecated))
#else
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_Goal __declspec(deprecated)
#endif

namespace pangolin_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PangolinAction_Goal_
{
  using Type = PangolinAction_Goal_<ContainerAllocator>;

  explicit PangolinAction_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->act_name = "";
    }
  }

  explicit PangolinAction_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : act_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->act_name = "";
    }
  }

  // field types and members
  using _act_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _act_name_type act_name;

  // setters for named parameter idiom
  Type & set__act_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->act_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_Goal
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_Goal
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PangolinAction_Goal_ & other) const
  {
    if (this->act_name != other.act_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const PangolinAction_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PangolinAction_Goal_

// alias to use template instance with default allocator
using PangolinAction_Goal =
  pangolin_interfaces::action::PangolinAction_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pangolin_interfaces


#ifndef _WIN32
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_Result __attribute__((deprecated))
#else
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_Result __declspec(deprecated)
#endif

namespace pangolin_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PangolinAction_Result_
{
  using Type = PangolinAction_Result_<ContainerAllocator>;

  explicit PangolinAction_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit PangolinAction_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_Result
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_Result
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PangolinAction_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const PangolinAction_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PangolinAction_Result_

// alias to use template instance with default allocator
using PangolinAction_Result =
  pangolin_interfaces::action::PangolinAction_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pangolin_interfaces


#ifndef _WIN32
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_Feedback __declspec(deprecated)
#endif

namespace pangolin_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PangolinAction_Feedback_
{
  using Type = PangolinAction_Feedback_<ContainerAllocator>;

  explicit PangolinAction_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->which_action = 0l;
    }
  }

  explicit PangolinAction_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->which_action = 0l;
    }
  }

  // field types and members
  using _which_action_type =
    int32_t;
  _which_action_type which_action;

  // setters for named parameter idiom
  Type & set__which_action(
    const int32_t & _arg)
  {
    this->which_action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_Feedback
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_Feedback
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PangolinAction_Feedback_ & other) const
  {
    if (this->which_action != other.which_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const PangolinAction_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PangolinAction_Feedback_

// alias to use template instance with default allocator
using PangolinAction_Feedback =
  pangolin_interfaces::action::PangolinAction_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pangolin_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_SendGoal_Request __declspec(deprecated)
#endif

namespace pangolin_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PangolinAction_SendGoal_Request_
{
  using Type = PangolinAction_SendGoal_Request_<ContainerAllocator>;

  explicit PangolinAction_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PangolinAction_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const pangolin_interfaces::action::PangolinAction_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_SendGoal_Request
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_SendGoal_Request
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PangolinAction_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PangolinAction_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PangolinAction_SendGoal_Request_

// alias to use template instance with default allocator
using PangolinAction_SendGoal_Request =
  pangolin_interfaces::action::PangolinAction_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pangolin_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_SendGoal_Response __declspec(deprecated)
#endif

namespace pangolin_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PangolinAction_SendGoal_Response_
{
  using Type = PangolinAction_SendGoal_Response_<ContainerAllocator>;

  explicit PangolinAction_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PangolinAction_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_SendGoal_Response
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_SendGoal_Response
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PangolinAction_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PangolinAction_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PangolinAction_SendGoal_Response_

// alias to use template instance with default allocator
using PangolinAction_SendGoal_Response =
  pangolin_interfaces::action::PangolinAction_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pangolin_interfaces

namespace pangolin_interfaces
{

namespace action
{

struct PangolinAction_SendGoal
{
  using Request = pangolin_interfaces::action::PangolinAction_SendGoal_Request;
  using Response = pangolin_interfaces::action::PangolinAction_SendGoal_Response;
};

}  // namespace action

}  // namespace pangolin_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_GetResult_Request __declspec(deprecated)
#endif

namespace pangolin_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PangolinAction_GetResult_Request_
{
  using Type = PangolinAction_GetResult_Request_<ContainerAllocator>;

  explicit PangolinAction_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PangolinAction_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_GetResult_Request
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_GetResult_Request
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PangolinAction_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PangolinAction_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PangolinAction_GetResult_Request_

// alias to use template instance with default allocator
using PangolinAction_GetResult_Request =
  pangolin_interfaces::action::PangolinAction_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pangolin_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_GetResult_Response __declspec(deprecated)
#endif

namespace pangolin_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PangolinAction_GetResult_Response_
{
  using Type = PangolinAction_GetResult_Response_<ContainerAllocator>;

  explicit PangolinAction_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PangolinAction_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const pangolin_interfaces::action::PangolinAction_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_GetResult_Response
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_GetResult_Response
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PangolinAction_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PangolinAction_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PangolinAction_GetResult_Response_

// alias to use template instance with default allocator
using PangolinAction_GetResult_Response =
  pangolin_interfaces::action::PangolinAction_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pangolin_interfaces

namespace pangolin_interfaces
{

namespace action
{

struct PangolinAction_GetResult
{
  using Request = pangolin_interfaces::action::PangolinAction_GetResult_Request;
  using Response = pangolin_interfaces::action::PangolinAction_GetResult_Response;
};

}  // namespace action

}  // namespace pangolin_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__pangolin_interfaces__action__PangolinAction_FeedbackMessage __declspec(deprecated)
#endif

namespace pangolin_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PangolinAction_FeedbackMessage_
{
  using Type = PangolinAction_FeedbackMessage_<ContainerAllocator>;

  explicit PangolinAction_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PangolinAction_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const pangolin_interfaces::action::PangolinAction_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_FeedbackMessage
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pangolin_interfaces__action__PangolinAction_FeedbackMessage
    std::shared_ptr<pangolin_interfaces::action::PangolinAction_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PangolinAction_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PangolinAction_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PangolinAction_FeedbackMessage_

// alias to use template instance with default allocator
using PangolinAction_FeedbackMessage =
  pangolin_interfaces::action::PangolinAction_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pangolin_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace pangolin_interfaces
{

namespace action
{

struct PangolinAction
{
  /// The goal message defined in the action definition.
  using Goal = pangolin_interfaces::action::PangolinAction_Goal;
  /// The result message defined in the action definition.
  using Result = pangolin_interfaces::action::PangolinAction_Result;
  /// The feedback message defined in the action definition.
  using Feedback = pangolin_interfaces::action::PangolinAction_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = pangolin_interfaces::action::PangolinAction_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = pangolin_interfaces::action::PangolinAction_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = pangolin_interfaces::action::PangolinAction_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PangolinAction PangolinAction;

}  // namespace action

}  // namespace pangolin_interfaces

#endif  // PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__STRUCT_HPP_
