//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
	Weapon *_weapon;
	std::string	_name;
public:
	void	attack( void );
	void	setWeapon(Weapon &weapon);
	HumanB(std::string name);
	HumanB(void);
};


#endif //CPP_HUMANB_HPP