cmake_minimum_required(VERSION 3.10)
project(formatter_ex)

include_directories(../formatter_lib)
add_library(formatter_ex STATIC formatter_ex.cpp formatter_ex.h)
target_link_libraries(formatter_ex PRIVATE formatter)
set(CMAKE_CXX_STANDARD 17)
