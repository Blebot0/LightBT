cmake_minimum_required(VERSION 3.22)

project(BehaviourTree)

include_directories(
  include
  "${PROJECT_SOURCE_DIR}/include/**"
  "${PROJECT_SOURCE_DIR}/src/**"
  "${PROJECT_SOURCE_DIR}/include/utils"
  "${PROJECT_SOURCE_DIR}/include/control_flow"
  "${PROJECT_SOURCE_DIR}/include/executor"

)

add_library( sequence_lib
  include/control_flow/SequenceNode.h
  src/control_flow/SequenceNode.cpp
)

add_library( action_lib
  include/executor/ActionNode.h
  src/executor/ActionNode.cpp
)

add_library( root_lib
  include/utils/RootNode.h
  src/utils/RootNode.cpp
)

add_executable(main src/main.cpp)
target_link_libraries(main sequence_lib action_lib root_lib)