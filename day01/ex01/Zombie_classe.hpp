//
// Created by Abdelhak El moussaoui on 8/28/22.
//

#ifndef CPP_ZOMBIE_CLASSE_HPP
#define CPP_ZOMBIE_CLASSE_HPP
#include <iostream>
#include <iostream>

class Zombie {
public:
	void	announce( void );
	Zombie();
	~Zombie();
	std::string	getter( void );
	void		setter(std::string name);
private:
	std::string	_name;
};


#endif //CPP_ZOMBIE_CLASSE_HPP
