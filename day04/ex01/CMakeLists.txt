cmake_minimum_required(VERSION 3.23)
project(.)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(main.cpp Animal.cpp Animal.hpp Dog.cpp Dog.hpp Cat.cpp Cat.hpp WrongAnimal.cpp WrongAnimal.hpp WrongCat.cpp WrongCat.hpp)
