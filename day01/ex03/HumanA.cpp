//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack( void ) {
	std::cout << _name <<  "attacks with their" << _Weapon.getType() << std::endl;
}
//
//void	HumanA::setWeapon(Weapon &Weapon) {
//	_Weapon = Weapon;
//}

HumanA::HumanA(std::string name, Weapon& weapon) {
	_name = name;
//	_Weapon = weapon;
}