cmake_minimum_required(VERSION 3.23)
project(../ex00)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Bureaucrat.cpp Bureaucrat.hpp main.cpp)