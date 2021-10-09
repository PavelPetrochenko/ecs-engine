cmake_minimum_required(VERSION 3.6)
project(ecs-engine)

set(ESCENGINE_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(${ESCENGINE_ROOT_PATH}/core core)
list(APPEND EXTRA_LIBS core)
add_subdirectory(${ESCENGINE_ROOT_PATH}/editor editor)
add_subdirectory(${ESCENGINE_ROOT_PATH}/tests tests)