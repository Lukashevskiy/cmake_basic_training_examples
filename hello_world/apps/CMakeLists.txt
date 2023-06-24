
add_executable(hello_world_app main.cpp)

# target_include_directories(hello_world_app PUBLIC ../include/libhello)


target_link_libraries(hello_world_app PRIVATE libhel)


