

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("dfa");
//	ClapTrap clapTrap(scavTrap);
	std::cout << "---------------------\n";
	ScavTrap s(scavTrap);
	s.attack("name");
	s.guardGate();
	s.beRepaired(12);
	s.takeDamage(12);
}