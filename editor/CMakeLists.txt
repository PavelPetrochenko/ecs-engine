add_executable(editor main.c)
set_target_properties(editor PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
target_include_directories(
    editor PUBLIC
    "${PROJECT_SOURCE_DIR}/core"
)

target_link_libraries(editor PUBLIC ${EXTRA_LIBS})

install(TARGETS editor DESTINATION bin)