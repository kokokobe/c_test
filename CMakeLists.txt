cmake_minimum_required(VERSION 3.14)
project(c_test)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/build")
add_definitions("-std=c++11")
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} main.cpp int_test/limits.cpp int_test/limits.h)
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
