cmake_minimum_required(VERSION 3.2)

# Emulate HunterGate:
# * https://github.com/hunter-packages/gate
include("cmake/HunterGate.cmake")

HunterGate(
  URL "https://github.com/cpp-pm/hunter/archive/v0.23.234.tar.gz"
  SHA1 "b67e11d7e9ee503e9f6e1b45eb1ef7bf2fb31279"
)

project(cpp-exercises LANGUAGES C CXX)

hunter_add_package(GTest)

# Add support to c++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#set(CMAKE_CXX_FLAGS_DEBUG "-g -pg -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g -fprofile-arcs -ftest-coverage")

enable_testing()
add_subdirectory(src out)
add_subdirectory(tests tests_out)
