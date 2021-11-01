cmake_minimum_required(VERSION 3.10)
set(TARGET core)

project(${TARGET})

# =============================================================================
# Sources
# =============================================================================
file(GLOB UTILS_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/utils/*.cpp
)

file(GLOB UTILS_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/utils/*.h
)

# =============================================================================
# Target
# =============================================================================
add_library(
        ${TARGET} SHARED
        ${UTILS_SOURCES} ${UTILS_HEADERS}
)

set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_RELEASE ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_DEBUG ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})

set_target_properties(${TARGET} PROPERTIES LIBRARY_OUTPUT_DIRECTORY_RELEASE ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES LIBRARY_OUTPUT_DIRECTORY_MINSIZEREL ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES LIBRARY_OUTPUT_DIRECTORY_DEBUG ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})

set_target_properties(${TARGET} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY_MINSIZEREL ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY_RELWITHDEBINFO ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})
set_target_properties(${TARGET} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${DIR_EXPORT}/${ENGINE_PLATFORM}/${ENGINE_ABI})

set_target_properties(${TARGET} PROPERTIES DEBUG_POSTFIX _debug)

# =============================================================================
# Includes
# =============================================================================
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${DIR_ENGINE_API})

# ==================================================================================================
# Preprocessor
# ==================================================================================================
target_compile_definitions(${TARGET} PUBLIC ENGINE_SHARED_LIBRARY)
