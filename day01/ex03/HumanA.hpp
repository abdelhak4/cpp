//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP
#include "Weapon.hpp"
#include <string>

class HumanA {
private:
	Weapon &_Weapon;
	std::string	_name;

public:
	void	attack( void );
	HumanA( std::string name, Weapon& weapon);
//	void	setWeapon(Weapon& Weapon);
};

#endif //CPP_HUMANA_HPP
