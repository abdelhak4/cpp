//
// Created by Abdelhak El moussaoui on 9/13/22.
//


#include <iostream>
#include "Dog.hpp"

void Dog::MakeSound() const {
    std::cout << "bow wow\n";
}

Dog::Dog(const std::string& type) {
    this->type = type;
    std::cout << "Dog Class name constructor called" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog Class destructor called" << std::endl;
}

Dog::Dog()
{
    brain = new Brain();
    std::cout << "Dog class default constructor called\n";
    type = "Dog";
}

Dog::Dog(Dog &copy) {
    std::cout << "Dog class copy constructor called\n";
    *this = copy;
}

Dog &Dog::operator=(const Dog &to) {
    this->type = to.type;
    return *this;
}
