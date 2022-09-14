cmake_minimum_required(VERSION 3.23)
project(.)

set(CMAKE_CXX_STANDARD 14)

include_directories(../../day04/ex01)

add_executable(animal main.cpp Brain.cpp Brain.hpp Cat.cpp Dog.cpp Animal.cpp)