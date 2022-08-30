//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#include "Weapon.hpp"

std::string	Weapon::getType() { return (_type); }

void	Weapon::setType(std::string type) { _type = type; }

Weapon::Weapon(std::string type) { _type = type; }