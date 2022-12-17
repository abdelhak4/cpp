//
// Created by Abdelhak El moussaoui on 9/3/22.
//
#include <iostream>
#include "Fixed.hpp"
int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::min( b, a ) << std::endl;
//	Fixed a;
//	std::cout << ++a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a + a << std::endl;
//	Fixed a( Fixed(3) + Fixed(3));
//	Fixed c(5);
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//	std::cout << a << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << c - a << std::endl;
//	std::cout << std::endl;
//	std::cout << c + a << std::endl;
	Fixed af  = b = a;
	std::cout << af << std::endl;
}