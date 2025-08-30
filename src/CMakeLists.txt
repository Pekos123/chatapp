add_executable(chatapp
    main.cpp
    ChatApp.cpp
    # GUI Lib
    GUI/Customs.cpp
    GUI/Button.cpp
    GUI/Frame.cpp
    GUI/GUIElement.cpp
    GUI/Text.cpp
    GUI/Event.cpp
)

target_include_directories(chatapp PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/lib/SDL3/local/include 
)

target_link_libraries(chatapp
    ${CMAKE_SOURCE_DIR}/lib/SDL3/local/lib/libSDL3.so
    ${CMAKE_SOURCE_DIR}/lib/SDL3/local/lib/libSDL3_ttf.so
)

set_target_properties(chatapp PROPERTIES
    INSTALL_RPATH "${CMAKE_SOURCE_DIR}/lib/SDL3/local/lib"
)
