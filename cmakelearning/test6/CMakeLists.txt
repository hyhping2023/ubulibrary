cmake_minimum_required(VERSION 3.15)
project(test)
# set(SRC add.cpp main.cpp minus.cpp)
# aux_source_directory(/home/hyh/code/c++/test5 SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CMAKE_CXX_STANDARD 11)
set(LIBRARY_OUTPUT_PATH /home/hyh/code/c++/test6/lib)

add_library(calc SHARED ${SRC})
add_library(cal STATIC ${SRC})
