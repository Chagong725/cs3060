cmake_minimum_required(VERSION 3.0)
project(project0)

set(CMAKE_CXX_STANDARD 14)

# Add GoogleTest lib
add_subdirectory(googletest)

include_directories(${CMAKE_SOURCE_DIR}/googletest/googletest/include)

# b10tob2
add_executable(b10tob2 main.cpp myUtils.cpp myUtils.h)

# runTests
add_executable(runTests myTests.cpp myUtils.cpp myUtils.h)

target_link_libraries(runTests gtest_main)