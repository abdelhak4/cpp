//
// Created by Abdelhak El moussaoui on 8/29/22.
//

#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP
#include <string>

class Weapon {
private:
	std::string	_type;
public:
	const std::string&	getType( void ); //const
	void		setType( std::string type );
	Weapon( std::string type );
};


#endif //CPP_WEAPON_HPP
