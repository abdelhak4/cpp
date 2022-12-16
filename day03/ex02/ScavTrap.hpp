//
/// Created by Abdelhak El moussaoui on 9/10/22.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	void	guardGate(void);
	ScavTrap( void );
	ScavTrap(std::string name);
	ScavTrap(const ClapTrap& copy);
	~ScavTrap();
	void attack(const std::string &target);
	ScavTrap& operator=(const ScavTrap& object);

};


#endif //CPP_SCAVTRAP_HPP
