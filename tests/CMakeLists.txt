add_executable(test_core main_test.cpp)
target_include_directories(
    test_core PUBLIC
    "${PROJECT_SOURCE_DIR}/core"
)