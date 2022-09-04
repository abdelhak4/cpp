//
// Created by Abdelhak El moussaoui on 9/2/22.
//

#include "Fixed.hpp"

Fixed::Fixed(const int val) {
	std::cout << "Default constructor called" << std::endl;
	fx_value = (val << fb);
	std::cout << "fixe point int " << fx_value << std::endl;
}

Fixed::Fixed(const float val) {
	fx_value = (val * (float)(1<<fb));
	std::cout << "fixe point float " <<  (val * (float)(1<<fb)) << std::endl;
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

void Fixed::setRawBits(const int raw) {
	fx_value = raw;
}

float Fixed::toFloat( void ) const {
	std::cout << "without float casting\n";
	return (static_cast<float >(fx_value) / static_cast<float >(1 << fb));
}

int Fixed::toInt(void) const {
	return (fx_value >> fb);
}

std::ostream &operator<<(std::ostream& os, const Fixed &obj) {
	os << obj.toFloat();
	return os;
}

Fixed::Fixed()
{
	fx_value = 0;
}