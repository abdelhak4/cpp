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
	Animal *animal[2];
	animal[0] = new Dog();
	animal[1] = new Cat();
	Brain *brain = new Brain();
	Dog *dog = new Dog();
	Cat *cat = new Cat();

	brain->setter("test");
	const std::string *p = brain->getIdeas();
	for (int i = 0; i < 100; ++i) {
		std::cout << p[i] << std::endl;
	}
	dog->setBrain(brain);
	brain->setter("ok");

	delete animal[0];
	delete animal[1];
	delete brain;

}
int main()
{
	test();
	system("leaks animal");
    return 0;
}