cmake_minimum_required(VERSION 3.28)
project(hello_world)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

add_executable(hello
  main.cpp
)

find_package(fmt REQUIRED)
target_link_libraries(hello PRIVATE fmt::fmt)
