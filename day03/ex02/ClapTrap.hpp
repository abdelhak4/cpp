//
// Created by Abdelhak El moussaoui on 9/10/22.
//

#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
protected:
	std::string		name;
	unsigned int	HitPoints{};
	unsigned int	energyPoints{};
	unsigned int	attackDamage{};
public:
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& object);
	~ClapTrap();

};


#endif //CPP_CLAPTRAP_HPP
