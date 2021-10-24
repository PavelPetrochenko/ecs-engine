cmake_minimum_required(VERSION 3.10)
project(ecs-engine VERSION 0.01)

# =============================================================================
# Variables
# =============================================================================

set(DIR_THIRDPARTY ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty)
set(DIR_EXPORT ${CMAKE_CURRENT_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE})
set(DIR_ENGINE_API ${CMAKE_CURRENT_SOURCE_DIR}/include)

if (WIN32)
	set(ENGINE_PLATFORM windows)
	set(ENGINE_ABI x64)
endif()

if(APPLE)
	set(ENGINE_PLATFORM macos)
	set(ENGINE_ABI x64)
endif()

if(UNIX AND NOT APPLE)
	set(ENGINE_PLATFORM linux)
	set(ENGINE_ABI x64)
endif()

# =============================================================================
# General compile flags
# =============================================================================
if (WIN32)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17 /Zc:__cplusplus")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /D_SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /D_CRT_SECURE_NO_WARNINGS")
else()
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fstrict-aliasing -Wno-unknown-pragmas -Wno-unused-function")
endif()

# =============================================================================
# Sub-projects
# =============================================================================
add_subdirectory(source/core)
add_subdirectory(source/modules)
add_subdirectory(source/editor)