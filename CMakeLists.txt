cmake_minimum_required(VERSION 3.20)
project(cmake_practice_examples)


set(MODERN_CMAKE_BUILD_TESTING ON)

include(CTest)

add_subdirectory(hello_world)
add_subdirectory(hello_world_simple)
