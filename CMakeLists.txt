cmake_minimum_required(VERSION 3.25.3)

project(Sorting_Algorithms C)

set(CMAKE_C_STANDARD 23)

include_directories(include)

add_executable(${PROJECT_NAME} ./src/main.c)
