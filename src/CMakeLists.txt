
add_executable(
        mips

        main.cpp

        component.cpp
        gate.cpp
)

target_include_directories(mips PUBLIC ${CMAKE_SOURCE_DIR}/includes)
