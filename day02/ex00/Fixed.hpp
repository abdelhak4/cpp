//
// Created by Abdelhak El moussaoui on 9/2/22.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
#include <iostream>

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& t);  //Copy
	Fixed& operator=(const Fixed& t); // copy assignment
	int getRawBits( void ) const;
	void setRawBits( int const raw );
private:
	int	fx_value;
	static const int fb = 8;
};


#endif //CPP_FIXED_HPP
