//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void	test()
{
//	Animal *animal[2];
//	animal[0] = new Dog();
//	animal[1] = new Cat();
//	Cat *cat = new Cat();

	Cat simple;
	std::cout <<    "---------------\n";
	{
		Cat basic = simple;
	}
	std::cout <<    "---------------\n";

//	Brain b;
//	b.setter("brain");
//	cat->setBrain(&b);
//	cat->getBrain();
//
//	delete cat;
	//delete animal[0];
	//delete animal[1];

}
int main()
{
	test();
	system("leaks animal");
    return 0;
}