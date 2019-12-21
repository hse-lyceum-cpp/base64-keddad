cmake_minimum_required(VERSION 3.13)
project(base64-keddad)

set(CMAKE_CXX_STANDARD 14)
add_executable(base64-keddad main.cpp)

set(SOURCES base64.cpp)
set(HEADERS base64.h)
add_library(lib ${SOURCES} ${HEADERS})