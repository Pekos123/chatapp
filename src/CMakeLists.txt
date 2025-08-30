add_executable(chatapp
    main.cpp
    ChatApp.cpp
)

target_link_libraries(chatapp
    app_gui
)

set_target_properties(chatapp PROPERTIES
    INSTALL_RPATH "${CMAKE_SOURCE_DIR}/lib/SDL3/local/lib"
)
