//
/// Created by Abdelhak El moussaoui on 9/10/22.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP
#include "ClapTrap.hpp"
//    | Derived class;   | Base class
class ScavTrap: public ClapTrap{

public:
	void	guardGate(void);
	ScavTrap(std::string name);

};


#endif //CPP_SCAVTRAP_HPP