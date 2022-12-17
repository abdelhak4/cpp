//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



void	polymorphismTest()
{
	std::cout << "------ test showing the correct behavior using pointer " << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->MakeSound(); //will output the cat sound!
	j->MakeSound();
	meta->MakeSound();
	delete meta;
	delete j;
	delete i;
}

void	BrainTest()
{
	Brain dmagh;
	dmagh.setter("bash");
	Cat		leet("cattt");

	leet.setBrain(&dmagh);
//	leet.MakeSound();
	leet.getBrain();
}

void	deepCopyTest()
{
	std::cout << "------ test showing the correct behavior using reference " << std::endl;
	Brain	 dmagh;
	Cat		*leet = new Cat();
	Cat		*mCat;

	dmagh.setter("bash");
	leet->setBrain(&dmagh);
	mCat = leet;
	delete mCat;
	leet->getBrain();
//	Dog		dog;
//	Dog		BigDog = dog;
}

int main()
{
//	BrainTest();
//	polymorphismTest();
	deepCopyTest();
	system("leaks animal");
	return 0;
}