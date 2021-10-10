cmake_minimum_required(VERSION 3.6)
project(core)

add_library(${PROJECT_NAME} STATIC core.c)
target_include_directories(${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR}
)

install(TARGETS ${PROJECT_NAME}  
        DESTINATION lib
)
install(FILES core.h
        DESTINATION include
)