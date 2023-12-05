cmake_minimum_required(VERSION 3.15)

# set(SRC add.cpp main.cpp minus.cpp)
# aux_source_directory(/home/hyh/code/c++/test5 SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH /home/hyh/code/c++/test5/build)

project(test)
add_executable(app ${SRCALL})

