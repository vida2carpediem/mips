enable_testing()

add_executable(
        mips_test

        test_gate.cpp

        ${CMAKE_SOURCE_DIR}/src/component.cpp
        ${CMAKE_SOURCE_DIR}/src/gate.cpp
)
target_link_libraries(
        mips_test
        GTest::gtest_main
)
target_include_directories(mips_test PUBLIC ${CMAKE_SOURCE_DIR}/includes)

include(GoogleTest)
gtest_discover_tests(mips_test)
