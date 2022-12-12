//
// Created by Abdelhak El moussaoui on 8/31/22.
//

#ifndef CPP_HARL_HPP
#define CPP_HARL_HPP
#include <iostream>

class Harl {
private:
    int x;
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
public:
	void	complain(std::string level );
     int  get() const  {return x;}
    Harl(){x = 1;}
};


#endif //CPP_HARL_HPP
