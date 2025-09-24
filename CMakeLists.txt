cmake_minimum_required(VERSION 4.0)
project(linklist C)

set(CMAKE_C_STANDARD 23)

add_executable(linklist main.c
        list.c
        list.h
        people.c
        people.h)
