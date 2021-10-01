cmake_minimum_required(VERSION 3.5)
project(core VERSION 1.0 LANGUAGES C)

set(SOURCES src/core.c)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c17 -Wall")

include_directories("include/")

add_executable(${PROJECT_NAME} ${SOURCES})
