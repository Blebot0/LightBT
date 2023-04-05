cmake_minimum_required(VERSION 3.22)

project(BehaviourTree)

add_compile_options(-std=c++17)
find_package(GTest REQUIRED) 
enable_testing()


include_directories(
  include
  "${PROJECT_SOURCE_DIR}/include/**"
  "${PROJECT_SOURCE_DIR}/src/**"
  "${PROJECT_SOURCE_DIR}/include/utils"
  "${PROJECT_SOURCE_DIR}/include/control_flow"
  "${PROJECT_SOURCE_DIR}/include/executor"
  ${GTEST_INCLUDE_DIRS}
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

add_executable(main test/main.cpp)
target_link_libraries(main sequence_lib action_lib root_lib)

add_executable(action_test test/executor/action_test.cpp)
target_link_libraries(action_test action_lib ${GTEST_LIBRARIES})

