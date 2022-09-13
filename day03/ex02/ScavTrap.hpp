//
/// Created by Abdelhak El moussaoui on 9/10/22.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP
#include "ClapTrap.hpp"
//    | Derived class;   | Base class
class ScavTrap: public ClapTrap{

public:
    static void    guardGate();
	ScavTrap( void );
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator=(const ScavTrap& object);
	~ScavTrap();

};


#endif //CPP_SCAVTRAP_HPP
