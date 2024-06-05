cmake_minimum_required(VERSION 3.22)
project(Prog_Lab)

set(CMAKE_CXX_STANDARD 14)

SET(CMAKE_CXX_FLAGS "-O0")
SET(CMAKE_C_FLAGS "-O0")

add_executable(Prog_Lab main.cpp Namespaces.h Definition_Point2.cpp Exp-s_Functions.cpp Exp_find.cpp Exp_Head_Insert.cpp Exp_Tail_insert.cpp Exp_Head_Erase.cpp Exp_Tail_Erase.cpp Exp_Sort.cpp)
