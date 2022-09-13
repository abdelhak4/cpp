//
/// Created by Abdelhak El moussaoui on 9/10/22.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP
#include "ClapTrap.hpp"
//    | Derived class;   | Base class
class FragTrap: public ClapTrap{

public:
	FragTrap( void );
	FragTrap(const std::string& name);
	FragTrap(const ClapTrap& copy);
	FragTrap& operator=(const FragTrap& object);
	~FragTrap();

};


#endif //CPP_SCAVTRAP_HPP
