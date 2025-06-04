cmake_minimum_required(VERSION 3.10)
project(solver)

include_directories(../formatter_lib ../formatter_ex_lib ../solver_lib)
add_executable(solver solver.cpp)
target_link_libraries(solver PRIVATE formatter_ex solver_lib)
