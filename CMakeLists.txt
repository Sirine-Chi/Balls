cmake_minimum_required(VERSION 3.5.0)
project(ball VERSION 0.1.0 LANGUAGES C CXX)

add_executable(ball src/main.cpp)

include_directories(/opt/GLFW)
find_package(glfw3 3.4 REQUIRED)
target_link_libraries(lib_test glfw)
