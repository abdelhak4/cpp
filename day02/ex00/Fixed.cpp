//
// Created by Abdelhak El moussaoui on 9/2/22.
//

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	fx_value = 0;
}

Fixed::Fixed(const Fixed &t)
{
	std::cout << "Copy constructor called" << std::endl;
	fx_value = t.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &t) {
	std::cout << "Copy assignment operator constructor called" << std::endl;
	this->fx_value = t.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return fx_value;
}

//void Fixed::setRawBits(const int raw) {
//	fx_value = raw * (double)(1 <<fb);
//}

void Fixed::setRawBits(const int raw) {
//	fx_value = raw * (double)(1 << fb);
	fx_value = raw;
}