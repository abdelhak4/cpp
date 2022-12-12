//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#include "HumanB.hpp"
#include <iostream>

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

void	HumanB::attack( void ) {
	if (_weapon)
	{
        std::cout << _name <<  " attacks with their ";
        std::string  type = _weapon->getType();
		std::cout << type << std::endl;
	}
    else
        std::cout << "the weapon is null" << std::endl;
}

HumanB::HumanB(std::string name) :  _weapon(nullptr), _name(name) {}