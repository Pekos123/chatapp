enable_testing()

add_executable(chatapp_tests
    # TESTS
    window_test.cpp
)

# Link against GTest and SDL3
target_link_libraries(chatapp_tests
    gtest
    gtest_main
    SDL3
    app_gui
)

set_target_properties(chatapp_tests PROPERTIES
    INSTALL_RPATH "${CMAKE_SOURCE_DIR}/lib/SDL3/local/lib"
    BUILD_WITH_INSTALL_RPATH TRUE
)

add_test(NAME ChatAppTests COMMAND chatapp_tests)
