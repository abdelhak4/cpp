//
/// Created by Abdelhak El moussaoui on 9/10/22.
//

#include "ClapTrap.hpp"


/// ** Constructors **

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
	HitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string& name) {
	std::cout << "name constructor called" << std::endl;
	if (name.empty())
	{
		std::cout << "please enter a string" << std::endl;
		return ;
	}
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
	this->name = object.name;
	this->HitPoints =  object.HitPoints;
	this->energyPoints = object.energyPoints;
	this->attackDamage = object.attackDamage;
	return *this;
}

/// ** member functions **
void ClapTrap::attack(const std::string &target) {
	if (HitPoints && energyPoints)
	{
		attackDamage--;
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target;
		std::cout << ", causing " <<  attackDamage << " points of damage!";
		std::cout << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	attackDamage += amount;
	std::cout << "ClapTrap " << name << " attacks " << name;
	std::cout << ", causing " <<  attackDamage << " points of damage!";
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	HitPoints += amount;
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << name;
	std::cout << ", causing " <<  attackDamage << " points of damage!";
	std::cout << std::endl;
}
