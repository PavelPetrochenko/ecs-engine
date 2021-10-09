add_executable(editor main.c)

target_link_libraries(editor PUBLIC ${EXTRA_LIBS})

install(TARGETS editor DESTINATION bin)