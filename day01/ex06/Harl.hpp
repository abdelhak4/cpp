//
// Created by Abdelhak El moussaoui on 8/31/22.
//

#ifndef CPP_HARL_HPP
#define CPP_HARL_HPP
#include <iostream>

class Harl {
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
public:
	void	harlFilter(std::string level );
};


#endif //CPP_HARL_HPP
