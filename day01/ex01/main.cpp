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
	zombie.announce();
}

Zombie	*zombieHorde(int N, std::string name )
{
	Zombie	*Horde;

	if (N <= 0)
		return NULL;
	Horde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		Horde[i].setter(name);
	}
	return Horde;
}

void	ft_unit_test()
{
	Zombie	*zombie;
	int		n;

	n = 2;
	zombie = zombieHorde(n, "unit");
	if (zombie == NULL)
		return ;
	std::cout << "-------\n";
	for (int i = 0; i < n; ++i) {
		zombie[i].announce();
	}
	delete [] zombie;
}
int main( void )
{
	ft_unit_test();
//	system("leaks zombie");
	return (0);
}