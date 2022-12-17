//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void	wrongAnimalTest()
{
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* w = new WrongCat();

	std::cout << "----------- those tests for wrongAnimal ---------\n";
	wrongAnimal->MakeSound();
	w->MakeSound();
	std::cout << "----------- end tests for wrongAnimal ---------\n";
	delete wrongAnimal;
	delete w;
}

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

void	polymorphismUsingRefTest()
{
	std::cout << "------ test showing the correct behavior using reference " << std::endl;
	Cat		mCat;
	Dog		dog;
	Animal&	leet = mCat;
	Animal&	mDog = dog;
	Animal	zoo;
	Animal	&animal = zoo;

	std::cout << "********** cat sound *********" << std::endl;
	leet.MakeSound();
	std::cout << "********** dog sound *********" << std::endl;
	mDog.MakeSound();
	std::cout << "********** animal sound *********" << std::endl;
	animal.MakeSound();
}

int main()
{
//	wrongAnimalTest();
	polymorphismTest();
//	polymorphismUsingRefTest();
    return 0;
}