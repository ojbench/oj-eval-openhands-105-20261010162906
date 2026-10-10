cmake_minimum_required(VERSION 3.10)
project(problem_105 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Use standard optimization flags without static linking
set(CMAKE_CXX_FLAGS "-O2 -pipe -Wall -Wextra")
set(CMAKE_EXE_LINKER_FLAGS "")
add_executable(code main.cpp)
