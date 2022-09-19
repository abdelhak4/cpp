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
	delete brain;
	std::cout << "Cat Class destructor called" << std::endl;
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
	std::cout << "Cat operator constructor called\n";
    this->type = to.type;
	this->brain = new Brain();
	*(this->brain) = *(to.brain);
    return *this;
}

void Cat::getBrain() const {
	const std::string *a = brain->getIdeas();
	for (int i = 0; i < 100; ++i) {
		std::cout << a[i] << std::endl;
	}
}

void Cat::setBrain(Brain *brain) {
	Cat::brain = brain;
}
