# configure_file(
#     "${PROJECT_SOURCE_DIR}/core/config.h.in"
#     "${PROJECT_BINARY_DIR}/config.h"
# )

add_library(core STATIC core.c)
target_include_directories(core
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)

install(TARGETS core DESTINATION lib)
install(FILES utils.h core.h DESTINATION include)