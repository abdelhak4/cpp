//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#include "HumanB.hpp"


void	HumanB::attack( void ) {
	std::cout << _name <<  " attacks with their " << _weapon->getType() << std::endl;
}