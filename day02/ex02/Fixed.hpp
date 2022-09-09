//
//// Created by Abdelhak El moussaoui on 9/2/22.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed (const int val);
		Fixed (const float val);
		~Fixed ();
		Fixed (const Fixed& t);  //Copy
		Fixed&	operator= (const Fixed& t); // copy assignment
		//// logical operators
		Fixed	operator>(const Fixed f ) const;
		Fixed	operator<(const Fixed f ) const;
		Fixed	operator>=(const Fixed f) const;
		Fixed	operator<=(const Fixed f) const;
		Fixed	operator==(const Fixed f) const;
		Fixed	operator!=(const Fixed f) const;
		//// Math operators
		Fixed	operator+( Fixed a );
		Fixed	operator-( Fixed a );
		float 	operator*( Fixed a );
		Fixed	operator/( Fixed a );
		Fixed	operator++( void );
		Fixed	operator++( int );
		Fixed	operator--( void );
		Fixed	operator--( int );
		/**********		getter and some other conversions		******/
		int 	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int 	toInt( void ) const;
		static	int& min(Fixed& f1, Fixed& f2);
		static	int& min(const Fixed& f1, const Fixed& f2) ;
		static	int& max(const Fixed& f1, const Fixed& f2);
		static	int& max(Fixed& f1, Fixed& f2);


	private:
		int	fx_value;
		static const int fb = 8;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);

#endif //CPP_FIXED_HPP
