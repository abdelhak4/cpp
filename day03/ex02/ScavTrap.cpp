//
// Created by Abdelhak El moussaoui on 9/10/22.
//

#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
    std::cout << "FragTrap is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	HitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &object) {
    std::cout << "ScavTrap operator constructor called" << std::endl;
    this->name = object.name;
    this->HitPoints =  object.HitPoints;
    this->energyPoints = object.energyPoints;
    this->attackDamage = object.attackDamage;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor constructor called" << std::endl;
}