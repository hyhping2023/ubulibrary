cmake_minimum_required(VERSION 3.15)
project(test)
# set(SRC add.cpp main.cpp minus.cpp)
# aux_source_directory(/home/hyh/code/c++/test5 SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build)
message("xxxxxxxxxxxxxxxxxx")

message(${SRC})
list(REMOVE_ITEM SRC /home/hyh/code/c++/test9/src/main.cpp)
message(${SRC})

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
add_library(calc SHARED ${SRC})

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_definitions(-DDEBUG)

add_executable(app /home/hyh/code/c++/test9/src/main.cpp)
message(STATUS "11111XXXXXXX")
target_link_libraries(app calc)
