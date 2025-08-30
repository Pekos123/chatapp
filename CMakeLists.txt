cmake_minimum_required(VERSION 3.16)
project(CHATAPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(app_gui STATIC
    src/GUI/Button.cpp
    src/GUI/Customs.cpp
    src/GUI/Event.cpp
    src/GUI/Frame.cpp
    src/GUI/Text.cpp
    src/GUI/GUIElement.cpp
)

target_include_directories(app_gui PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/lib/SDL3/local/include
)

target_link_libraries(app_gui
    ${CMAKE_SOURCE_DIR}/lib/SDL3/local/lib/libSDL3.so
    ${CMAKE_SOURCE_DIR}/lib/SDL3/local/lib/libSDL3_ttf.so
)

# GoogleTest, if you have CMakeLists.txt in googletest
add_subdirectory(lib/googletest EXCLUDE_FROM_ALL)

add_subdirectory(src)
add_subdirectory(tests)
