cmake_minimum_required(VERSION 3.16)
project(CHATAPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

# GoogleTest, if you have CMakeLists.txt in googletest
add_subdirectory(lib/googletest EXCLUDE_FROM_ALL)

add_subdirectory(src)
add_subdirectory(tests)
