cmake_minimum_required(VERSION 3.10)
project(formatter)

add_library(formatter STATIC formatter.cpp formatter.h)
set(CMAKE_CXX_STANDARD 17)
