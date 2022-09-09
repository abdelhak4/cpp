//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#include "HumanB.hpp"
#include <iostream>

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void	HumanB::attack( void ) {
	std::cout << _name <<  " attacks with their ";
	if (_weapon)
	{
		std::string  type = _weapon->getType();
		std::cout << type << std::endl;
	}
}

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr) {}