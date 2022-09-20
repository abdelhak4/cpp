cmake_minimum_required(VERSION 3.23)
project(../ex00)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Bureaucrat.cpp Bureaucrat.hpp main.cpp ../ex01/Form.cpp ../ex01/Form.hpp ../ex02/ShrubberyCreationForm.cpp ../ex02/ShrubberyCreationForm.hpp ../ex02/RobotomyRequestForm.cpp ../ex02/RobotomyRequestForm.hpp ../ex02/PresidentialPardonForm.cpp ../ex02/PresidentialPardonForm.hpp)