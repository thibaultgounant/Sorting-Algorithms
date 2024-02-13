cmake_minimum_required(VERSION 3.25.3)

project(Sorting_Algorithms C)

set(CMAKE_C_STANDARD 23)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  ${PROJECT_SOURCE_DIR}/bin)

include_directories(./include)

add_executable(${PROJECT_NAME} ./src/main.c)
