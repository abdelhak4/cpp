//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#include "Weapon.hpp"

std::string	Weapon::getType() { return (_type); }

Weapon::Weapon(std::string type) { _type = type; }