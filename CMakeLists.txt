cmake_minimum_required(VERSION 3.25.3)

project(Sorting_Algorithms C)

set(CMAKE_C_STANDARD 23)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

include_directories(./include)

aux_source_directory(./src/sorts SORTS)
aux_source_directory(./src/helpers HELPERS)

add_executable(${PROJECT_NAME} ./src/main.c ${SORTS} ${HELPERS})
add_executable(${PROJECT_NAME}_test ./tests/main.c ${SORTS} ${HELPERS})

add_subdirectory(./lib/glfw)
add_subdirectory(./lib/glew)

target_link_libraries(${PROJECT_NAME} glfw libglew_static)
