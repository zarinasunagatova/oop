cmake_minimum_required(VERSION 3.14)
project(oop1_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(oop1_main
    src/main.cpp
    src/oop1.cpp
)

target_include_directories(oop1_main PRIVATE include)

add_executable(oop1_tests
    test/test_oop1.cpp
    src/oop1.cpp  
)

target_include_directories(oop1_tests PRIVATE include)
target_link_libraries(oop1_tests PRIVATE GTest::gtest GTest::gtest_main)

gtest_discover_tests(oop1_tests)