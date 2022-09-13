//
// Created by Abdelhak El moussaoui on 9/10/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	HitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const ClapTrap &copy) : ClapTrap(copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &object) {
	std::cout << "FragTrap operator constructor called" << std::endl;
	this->name = object.name;
	this->HitPoints =  object.HitPoints;
	this->energyPoints = object.energyPoints;
	this->attackDamage = object.attackDamage;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor constructor called" << std::endl;
}