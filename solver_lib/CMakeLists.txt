cmake_minimum_required(VERSION 3.10)
project(solver_lib)

add_library(solver_lib STATIC solver.cpp solver.h)
set(CMAKE_CXX_STANDARD 17)
