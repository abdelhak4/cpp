//
// Created by Abdelhak El moussaoui on 8/28/22.

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
public:
		Zombie();
		~Zombie();
		void	announce( void );
		std::string	getter( void );
		void	setter(std::string name);

private:
		std::string	_name;
};

//
//void	randomChump(std::string name);
//Zombie	*newZombie(st d::string name);

#endif //ZOMBIE_HPP
