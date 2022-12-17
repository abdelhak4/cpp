#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main ()
{
	ClapTrap clapTrap("CLAP");
	ScavTrap scavTrap("SCAV");


	clapTrap.attack ("me");
	scavTrap.attack("ael");
	clapTrap.beRepaired(1);
	clapTrap.takeDamage(3);
	scavTrap.takeDamage(1);
	scavTrap.guardGate();
}