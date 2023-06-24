FetchContent_Declare(
  catch
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v2.13.6)
FetchContent_MakeAvailable(catch)

add_executable(test_hello_world_out hello_world_test.cpp)

target_link_libraries(test_hello_world_out PRIVATE libhel Catch2::Catch2)

add_test(NAME hello_world_out_test COMMAND test_hello_world_out)