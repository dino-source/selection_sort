cmake_minimum_required(VERSION 3.29.0)

set(app "selection_sort_app")

set(SOURCES solution.h solution.cpp main.cpp)
add_executable(${app} ${SOURCES})
