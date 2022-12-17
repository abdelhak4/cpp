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
	brain = new Brain();
    std::cout << "Cat parametrized Class constructor called" << std::endl;
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
	this->type = copy.type;
	brain = new Brain();

	*(this->brain) = *(copy.brain);
}

Cat &Cat::operator=(const Cat &to) {
	std::cout << "Cat operator constructor called\n";
//	delete brain;
//
//	brain = new Brain();
    this->type = to.type;
	*(this->brain) = *(to.brain);
    return *this;
}

void Cat::getBrain() const {
	const std::string *a = brain->getIdeas();
	for (int i = 0; i < 100; ++i) {
		std::cout << a[i] << std::endl;
	}
}

void Cat::setBrain(Brain *newBrain) {
	if (newBrain == nullptr)
		return ;
//	delete brain;
//	this->brain = new Brain;
	*Cat::brain = *newBrain;
}
