cmake_minimum_required(VERSION 3.3)
project(pa1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp point.cpp point.h pa1.cpp pa1.h main.cpp main.h)
add_executable(pa1 ${SOURCE_FILES})