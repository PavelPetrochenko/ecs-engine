add_executable(test_core main_test.cpp)
target_include_directories(
    test_core PUBLIC
    "${CMAKE_SOURCE_DIR}/core"
)