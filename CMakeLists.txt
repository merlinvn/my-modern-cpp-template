cmake_minimum_required(VERSION 3.10)

# set the project name
project(Hello_Nvim)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# include_directories(${PROJECT_SOURCE_DIR})

set(SRC main.cpp Blah.h)

# add the executable
add_executable(hello ${SRC})
