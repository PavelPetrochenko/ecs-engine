cmake_minimum_required(VERSION 3.6)
project(ecs-engine VERSION 1.0)

add_subdirectory(${PROJECT_SOURCE_DIR}/core core)
list(APPEND EXTRA_LIBS core)
add_subdirectory(${PROJECT_SOURCE_DIR}/editor editor)
add_subdirectory(${PROJECT_SOURCE_DIR}/tests tests)

include(InstallRequiredSystemLibraries)
include(CPack)