cmake_minimum_required(VERSION 3.9)
project(apue_practice C)

set(CMAKE_C_STANDARD 99)

#add_executable(apue_practice c7/c7_main.c c7/c7_header.h c8/c8_main.c)
add_executable(c8/c8_main.c c8/c8_header.h c8/TestFork.c)