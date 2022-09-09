//
//// Created by Abdelhak El moussaoui on 9/2/22.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
#include <iostream>
#include <math.h>

class Fixed {
public:
	Fixed();
	Fixed (const int val);
	Fixed (const float val);
	~Fixed ();
	Fixed (const Fixed& t);  //Copy
	Fixed& operator= (const Fixed& t); // copy assignment
	/**********							******/
	int 	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int 	toInt( void ) const;
private:
	int	fx_value;
	static const int fb = 8;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);

#endif //CPP_FIXED_HPP
