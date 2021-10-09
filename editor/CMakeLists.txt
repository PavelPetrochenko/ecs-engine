add_executable(editor main.c)
target_include_directories(
    editor PUBLIC
    "${PROJECT_SOURCE_DIR}/core"
)

target_link_libraries(editor PUBLIC ${EXTRA_LIBS})

install(TARGETS editor DESTINATION bin)