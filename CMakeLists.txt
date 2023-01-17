cmake_minimum_required(VERSION 3.24)
project(ROTEncrypt)
include_directories(C:/boost_1_81_0/boost_1_81_0)
link_directories(C:/boost_1_81_0/boost_1_81_0/libs)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")
set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS "-static")

set(SOURCE_FILES main.cpp)
add_executable(ROTEncrypt main.cpp)
