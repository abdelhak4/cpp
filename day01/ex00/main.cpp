//
// Created by Abdelhak El moussaoui on 8/28/22.
//

#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie();

	newZombie->setter(name);
	return newZombie;
}

void    randomChump(std::string name)
{
	Zombie zombie;

	zombie.setter(name);
	zombie.announce();
}

void	unitTest(void )
{
	Zombie *nz = newZombie("ael");
	nz->announce();
	delete nz;
}

int main( void )
{
	Zombie zombieTest = Zombie();
	zombieTest.announce();
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-------------- calling unitTest ----------" << std::endl;
	unitTest();
	std::cout << "------------------------------------------" << std::endl;;
	std::cout << "-------------- calling randomChump -------" << std::endl;
	randomChump("login");
	std::cout << "------------------------------------------" << std::endl;
//	system("leaks zombie");
	return (0);
}