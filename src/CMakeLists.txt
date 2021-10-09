add_executable(engine main.c)
target_include_directories(engine PUBLIC "${PROJECT_BINARY_DIR}/include")
add_subdirectory(core core)
target_link_libraries(engine core)