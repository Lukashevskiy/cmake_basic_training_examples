cmake_minimum_required(VERSION 3.20)

project(hello_world_simple)

add_library(hellolib hello_world.hpp hello_world.cpp)

add_executable(hello_world main.cpp)

target_link_libraries(hello_world hellolib)

enable_testing()
add_test(NAME hello_world COMMAND hello_world)