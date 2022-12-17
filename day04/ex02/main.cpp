//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	abstraction() {
//	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->MakeSound(); //will output the cat sound!
	std::cout << j->getType() << " " << std::endl;
	j->MakeSound();
	delete j;
	delete i;
	/*Cat	cat;
	Cat	leet;

	cat = leet;*/
}

int main()
{
	abstraction();
	return 0;
}