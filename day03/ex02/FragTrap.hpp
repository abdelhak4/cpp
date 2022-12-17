//
/// Created by Abdelhak El moussaoui on 9/10/22.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

public:
	FragTrap( void );
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& object);
	~FragTrap();
	void attack(const std::string &target);
	void	highFivesGuys();
};


#endif //SCAVTRAP_HPP