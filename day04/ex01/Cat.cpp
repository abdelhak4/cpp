//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include <iostream>
#include "Cat.hpp"

void Cat::MakeSound() const {
    std::cout << "miaow miaow \n";
}

Cat::Cat(const std::string& type) {
    this->type = type;
    std::cout << "Cat Class name constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat Class destructor called" << std::endl;
    delete brain;
}

// default
Cat::Cat()
{
	brain = new Brain();
    std::cout << "Cat class default constructor called\n";
    type = "Cat";
}

Cat::Cat(Cat &copy) {
    std::cout << "Cat class copy constructor called\n";
    *this = copy;
}

Cat &Cat::operator=(const Cat &to) {
    this->type = to.type;
    return *this;
}
