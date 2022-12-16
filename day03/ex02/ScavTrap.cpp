//
// Created by Abdelhak El moussaoui on 9/10/22.
//

#include "ScavTrap.hpp"

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Named constructor called" << std::endl;
	this->name = name;
	HitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	HitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ClapTrap &copy) : ClapTrap(copy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &object) {
	std::cout << "ScavTrap operator constructor called" << std::endl;
	this->name = object.name;
	this->HitPoints =  object.HitPoints;
	this->energyPoints = object.energyPoints;
	this->attackDamage = object.attackDamage;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor constructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (HitPoints && energyPoints)
	{
		energyPoints--;
		std::cout << "ScavTrap " << name << " attacks " << target;
		std::cout << ", causing " <<  attackDamage << " points of damage!";
		std::cout << std::endl;
	}
	else
		std::cout << "ScavTrap has No Energy Point or Hit Point" << std::endl;
}