cmake_minimum_required (VERSION 2.6)

add_library(Library STATIC printlib.c)

add_executable(cmake_basic cmake_basic.cpp)

target_link_libraries(cmake_basic PUBLIC Library)