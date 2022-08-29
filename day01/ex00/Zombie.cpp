//
// Created by Abdelhak El moussaoui on 8/28/22.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie;

	newZombie->setter(name);
	return newZombie;
}

void	randomChump(std::string name)
{
	Zombie zombie;

	zombie.setter(name);
	std::cout << zombie.getter();
	zombie.announce();
}