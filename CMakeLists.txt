cmake_minimum_required(VERSION 3.9)
project(apue_practice C)

set(CMAKE_C_STANDARD 99)

#add_executable(apue_practice c7/c7_main.c c7/c7_header.h c8/c8_main.c)
#add_executable(apue_practice c8/c8_main.c c8/c8_header.h c8/TestFork.c)
add_executable(apue_practice c11/c11_main.c c11/c11_header.h c11/TestPThread.c c11/ProducerConsumer.c)