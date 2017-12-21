cmake_minimum_required(VERSION 3.9)
project(catch_demo)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp main_test.cpp)

add_executable(catch_demo main.cpp)
add_executable(catch_demo_test main_test.cpp)