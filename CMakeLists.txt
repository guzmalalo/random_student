cmake_minimum_required(VERSION 3.9)   # CMake version check
project(random_student)               # Create project "random_student"
set(CMAKE_C_STANDARD 11)              # Enable C 11 standard

# Add main.cpp file of the project root directory as a source file
set(SOURCE_FILES main.c
        main.c
        csv.c
        csv.h)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(random_student ${SOURCE_FILES})