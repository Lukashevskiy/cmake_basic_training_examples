
set(HEADER_LIST "${hello_world_SOURCE_DIR}/include/libhello/hello_world.hpp")

add_library(libhel hello_world.cpp ${HEADER_LIST})

target_include_directories(libhel PUBLIC ../include/)


source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST})
