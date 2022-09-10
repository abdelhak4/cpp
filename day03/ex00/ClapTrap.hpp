//
// Created by Abdelhak El moussaoui on 9/10/22.
//

#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
private:
	std::string		name;
	unsigned int	HitPoints = 10;
	unsigned int	energyPoints = 10;
	unsigned int	attackDamage = 0;
public:
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	ClapTrap( void );
	ClapTrap( std::string name	 );
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& object);
	~ClapTrap();

};


#endif //CPP_CLAPTRAP_HPP
