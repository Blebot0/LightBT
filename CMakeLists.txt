cmake_minimum_required(VERSION 3.22)

project(BehaviourTree)

include_directories(
  include
  "${PROJECT_SOURCE_DIR}/include/"
  "${PROJECT_SOURCE_DIR}/src/"
  "${PROJECT_SOURCE_DIR}/include/utils"

)

add_library( main_header

  include/control_flow/SequenceNode.h
  src/control_flow/SequenceNode.cpp
)

add_executable(main src/main.cpp)
target_link_libraries(main main_header)