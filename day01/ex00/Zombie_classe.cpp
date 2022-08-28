//
// Created by Abdelhak El moussaoui on 8/28/22.
//

#include "Zombie_classe.hpp"

void	Zombie::announce( void ) {
	std::cout << ": BraiiiiiiinnnzzzZ..." <<  '\n';
}

Zombie::Zombie() { std::cout << "Constructot is called!\n"; }

Zombie::~Zombie() { std::cout << "destructors is called!\n"; }

std::string Zombie::getter() { return (_name); }

void	Zombie::setter(std::string name) { _name = name; }