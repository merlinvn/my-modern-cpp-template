cmake_minimum_required(VERSION 3.10)
# set the project name
project(Hello_Nvim)

# choose the C++ standard, supported values are 98, 11, 14, 17, 20, 23
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)

add_subdirectory(test)
