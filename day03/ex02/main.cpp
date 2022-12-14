#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	ClapTrap clapTrap("CLAP");
	ScavTrap scavTrap("SCAV");
	FragTrap fragTrap("fragTrap");

	clapTrap.attack ("me");
	scavTrap.attack("ael");
	clapTrap.beRepaired(1);
	clapTrap.takeDamage(0);
	scavTrap.takeDamage(0);
	scavTrap.guardGate();
}