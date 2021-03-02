cmake_minimum_required(VERSION 3.10)

set(CMAKE_TOOLCHAIN_FILE
  ${CMAKE_CURRENT_SOURCE_DIR}/ext/vcpkg/scripts/buildsystems/vcpkg.cmake  CACHE
  STRING "Vcpkg toolchain file")

# set the project name
project(Hello_Nvim)

# choose the C++ standard, supported values are 98, 11, 14, 17, 20, 23
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)



add_subdirectory(src)

option(WITH_TESTS "Build the tests" ON)
if(WITH_TESTS)
  enable_testing()
  add_subdirectory(test)
endif()

