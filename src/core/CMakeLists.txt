add_library(core STATIC core.c)
target_include_directories(core PUBLIC "${PROJECT_BINARY_DIR}/include")