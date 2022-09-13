//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include <iostream>
#include "Animal.hpp"

void Animal::MakeSound() const {
    std::cout << "You can't understand Animal's sound\n";
}

Animal::Animal(const std::string& type) {
    std::cout << "Base Class name constructor called" << std::endl;
    this->type = type;
}

Animal::~Animal() {
    std::cout << "Base Class destructor called" << std::endl;
}

Animal::Animal()
{
    std::cout << "Base class default constructor called\n";
    type = "";
}

Animal::Animal(Animal &copy) {
    std::cout << "Base class copy constructor called\n";
    *this = copy;
}

Animal &Animal::operator=(const Animal &to) {
    this->type = to.type;
    return *this;
}

const std::string &Animal::getType() const {
    return type;
}
