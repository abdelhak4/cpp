//
// Created by Abdelhak El moussaoui on 9/10/22.
//

#include "ScavTrap.hpp"

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	ClapTrap(100, 50, 20);
}