//
// Created by Abdelhak El moussaoui on 9/13/22.
//


#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"
void Dog::MakeSound() const {
    std::cout << "bow wow\n";
}

Dog::Dog(const std::string& type) {
    this->type = type;
    std::cout << "Dog Class name constructor called" << std::endl;
}

Dog::~Dog()  {
    std::cout << "Dog Class destructor called" << std::endl;
	delete brain;
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
	// todo here should allocate for brain to reach deep copy
	this->brain = to.brain;
    return *this;
}

Brain *Dog::getBrain() const {
	return brain;
}

void Dog::setBrain(Brain *b) {
	Dog::brain = b;
}
