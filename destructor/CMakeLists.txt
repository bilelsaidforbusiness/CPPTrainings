cmake_minimum_required(VERSION 3.29.0)
project(Destructor VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Destructor main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
