cmake_minimum_required(VERSION 3.6)
project(ecs-engine VERSION 1.0)

set(CMAKE_DEBUG_POSTFIX d)

configure_file(
    "${PROJECT_SOURCE_DIR}/cmake/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

add_subdirectory(${PROJECT_SOURCE_DIR}/core core)
list(APPEND EXTRA_LIBS core)
add_subdirectory(${PROJECT_SOURCE_DIR}/editor editor)
add_subdirectory(${PROJECT_SOURCE_DIR}/tests tests)

install(EXPORT core_targets
    FILE core_targets.cmake
    DESTINATION lib/cmake/core    
)

include(InstallRequiredSystemLibraries)
include(CPack)
include(CMakePackageConfigHelpers)

configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Config.cmake.in
  "${CMAKE_CURRENT_BINARY_DIR}/core_config.cmake"
  INSTALL_DESTINATION "lib/cmake/example"
  NO_SET_AND_CHECK_MACRO
  NO_CHECK_REQUIRED_COMPONENTS_MACRO
)

write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/core_config_version.cmake"
  VERSION "${ECSENGINE_VERSION_MAJOR}.${ECSENGINE_VERSION_MINOR}"
  COMPATIBILITY AnyNewerVersion
)

install(FILES
  ${CMAKE_CURRENT_BINARY_DIR}/core_config.cmake
  ${CMAKE_CURRENT_BINARY_DIR}/core_config_version.cmake
  DESTINATION lib/cmake/core
)

export(EXPORT core_targets
  FILE "${CMAKE_CURRENT_BINARY_DIR}/core_targets.cmake"
)