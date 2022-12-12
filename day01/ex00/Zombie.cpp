//
// Created by Abdelhak El moussaoui on 8/28/22.
//

#include "Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout <<  _name << ": BraiiiiiiinnnzzzZ..." <<  std::endl;
}

Zombie::Zombie() {
	_name = "{ Default Name }";
	std::cout << "Constructor is called!\n";
}

Zombie::~Zombie() { std::cout << _name <<": Destructors is called!\n"; }

std::string Zombie::getter() { return (_name); }

void	Zombie::setter(std::string name) { _name = name; }
