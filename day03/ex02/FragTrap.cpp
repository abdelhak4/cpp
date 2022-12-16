//
// Created by Abdelhak El moussaoui on 9/10/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "FragTrap Named constructor called" << std::endl;
}

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	HitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->name = copy.name;
	this->HitPoints =  copy.HitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
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

void FragTrap::highFivesGuys() {
	std::cout << "high fives " << std::endl;
}