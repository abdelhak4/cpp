//
// Created by Abdelhak El moussaoui on 8/28/22.
//

#include "Zombie_classe.hpp"
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name )
{
	Zombie	*Horde;
	Zombie	*firs;

	firs = nullptr;
	for (int i = 0; i < N; i++) {
		if (i == 0)
			firs = newZombie(name);
		else
		{
			Horde = newZombie(name);
			Horde->announce();
			delete Horde;
		}
	}
	return firs;
}
int main( void )
{
	Zombie	*zombie;

	zombie = zombieHorde(0, "abde");
	if (zombie != nullptr)
		zombie->announce();
	else
		std::cout << "enter N > 0" << std::endl;
	return (0);
}