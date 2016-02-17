cmake_minimum_required(VERSION 3.3)
project(SREngine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp SREngine.cpp SREngine.h Application.hpp)
add_executable(SREngine ${SOURCE_FILES})