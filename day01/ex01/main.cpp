//
// Created by Abdelhak El moussaoui on 8/28/22.
//

#include "Zombie_classe.hpp"
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name )
{
	Zombie	*Horde;
	Zombie	*firs;
	for (int i = 0; i < N; i++) {
		if (i == 0)
			firs = newZombie(name);
		else
		{
			Horde = newZombie(name);
			std::cout << Horde->getter();
			Horde->announce();
			delete Horde;
		}
	}
	return firs;
}
int main( void )
{
	std::cout << zombieHorde(3, "abde")->getter();
	return (0);
}