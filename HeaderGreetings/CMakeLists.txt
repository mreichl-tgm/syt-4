cmake_minimum_required(VERSION 3.6)
project(HeaderGreetings)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES greetings.c greetings.h main.c)
add_executable(HeaderGreetings ${SOURCE_FILES})