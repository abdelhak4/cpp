//
// Created by Abdelhak El moussaoui on 8/28/22.
//

#include "Zombie_classe.hpp"
#include "Zombie.hpp"

int main( void )
{
	Zombie *zombie1;

	zombie1 = newZombie("test ");
	std::cout << zombie1->getter();
	zombie1->announce();
	randomChump("random ");
	delete zombie1;
	return (0);
}