add_library(core STATIC core.c)
target_include_directories(core
    INTERFACE 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>
)

install(TARGETS core 
        DESTINATION lib
        EXPORT core_targets
)
install(FILES utils.h core.h 
        DESTINATION include
)