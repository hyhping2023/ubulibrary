cmake_minimum_required(VERSION 3.15)
project(test)
# set(SRC add.cpp main.cpp minus.cpp)
# aux_source_directory(/home/hyh/code/c++/test5 SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CMAKE_CXX_STANDARD 11)

link_libraries(cal)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib1 )

add_executable(app ${SRC})