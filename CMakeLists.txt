cmake_minimum_required(VERSION 3.16)
project(ecs-engine VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src engine)
add_subdirectory(tests tests)