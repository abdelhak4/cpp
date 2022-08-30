//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack( void ) {
	std::cout << _name <<  " attacks with their " << _Weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _Weapon(weapon) {
	_name = name;
}