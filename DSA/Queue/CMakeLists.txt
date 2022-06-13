cmake_minimum_required(VERSION 3.19)
project(Queue C)

set(CMAKE_C_STANDARD 11)

add_executable(Queue
        circularQueueArray.c
        circularQueueL.c)
