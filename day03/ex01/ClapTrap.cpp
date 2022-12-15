//
// Created by Abdelhak El moussaoui on 9/10/22.
//

#include "ClapTrap.hpp"


/// ** Constructors **

ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor called" << std::endl;
	name = "default";
	HitPoints = 10; // represent health of the ClapTrap
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "name constructor called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &object) {
	std::cout << "Copy assignment operator constructor called" << std::endl;
	name = object.name;
	energyPoints = object.energyPoints;
	attackDamage = object.attackDamage;
	HitPoints = object.HitPoints;
	return *this;
}


/// ** member functions **
void ClapTrap::attack(const std::string &target) {
	if (HitPoints && energyPoints)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target;
		std::cout << ", causing " <<  attackDamage << " points of damage!";
		std::cout << std::endl;
	}
	else
		std::cout << "ClapTrap has No Energy Point or Hit Point" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (HitPoints && energyPoints)
	{
		std::cout << "ClapTrap has taken a damage" << std::endl;
		attackDamage += amount;
	}
	else
		std::cout << "ClapTrap has No Energy Point or Hit Point" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (HitPoints && energyPoints)
	{
		std::cout << "ClapTrap Repaired it self by amount of " << amount << std::endl;
		HitPoints += amount;
		energyPoints--;
	}
	else
		std::cout << "ClapTrap has No Energy Point or Hit Point" << std::endl;
}
