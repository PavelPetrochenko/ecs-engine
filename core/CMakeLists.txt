add_library(core STATIC core.c)
target_include_directories(core
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)

install(TARGETS core DESTINATION lib)
install(FILES core.h DESTINATION include)