cmake_minimum_required(VERSION 3.6)
project(editor)

add_executable(editor main.c)
target_include_directories(editor 
    PRIVATE ${CMAKE_SOURCE_DIR}/core
)

target_link_libraries(editor PUBLIC core)

install(TARGETS editor DESTINATION bin)