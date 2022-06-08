cmake_minimum_required(VERSION 3.6)
set(TARGET game)

project(${TARGET})

# =============================================================================
# Sources
# =============================================================================
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

# =============================================================================
# Target
# =============================================================================
add_executable(${TARGET} ${SOURCES} ${HEADERS})

set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_RELEASE ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_DEBUG ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})

set_target_properties(${TARGET} PROPERTIES DEBUG_POSTFIX _debug)

# =============================================================================
# Includes
# =============================================================================
target_include_directories(${TARGET} PUBLIC ${API_DIR})

# ==================================================================================================
# Libraries
# ==================================================================================================
target_link_libraries(${TARGET} PUBLIC core glfw_window vk_render)