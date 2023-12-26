cmake_minimum_required(VERSION 3.13)
project(blank)

# Get all files in the source directory recursively
file(GLOB_RECURSE SRC "src/*.cpp" "src/*.c")

# Create an executable using those source file
add_executable(${PROJECT_NAME} ${SRC})

# Specify that the C++ version to use for the executable is C++17
target_compile_options(${PROJECT_NAME} PRIVATE /std:c++17)