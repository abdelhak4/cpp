
//// Created by Abdelhak El moussaoui on 9/2/22.
////


#include "Fixed.hpp"


//// constructors
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fx_value = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	fx_value = (val << fb);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	fx_value = roundf(val * (static_cast<float>((1<<fb))));
}

Fixed::Fixed(const Fixed& t)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = t;
}

Fixed& Fixed::operator=(const Fixed &t)
{
	std::cout << "Copy assignment operator constructor called" << std::endl;
	this->fx_value = t.getRawBits();
	return this;
}

Fixed::~Fixed(void) { std::cout << "Destructor called" << std::endl; }

//// public member functions

int Fixed::getRawBits() const { return fx_value; }

void Fixed::setRawBits(const int raw) { fx_value = raw; }

float Fixed::toFloat( void ) const
{
	float f = (static_cast<float>(fx_value) / (1 << fb));
	return f;
}

int Fixed::toInt(void) const { return (fx_value >> fb); }

std::ostream &operator<<(std::ostream& os, const Fixed &obj)
{
	os << obj.toFloat();
	return os;
}

/// logical operators:

bool Fixed::operator>(const Fixed f) const { return (fx_value > f.fx_value); }

bool Fixed::operator<(const Fixed f) const { return (fx_value < f.fx_value); }

bool Fixed::operator>=(const Fixed f) const { return (fx_value >= f.fx_value); }

bool Fixed::operator<=(const Fixed f) const { return (fx_value <= f.fx_value); }

bool Fixed::operator==(const Fixed f) const { return (fx_value == f.fx_value); }

bool Fixed::operator!=(const Fixed f) const { return (fx_value != f.fx_value); }

/**** Math operators ***/

float Fixed::operator*(Fixed b) {
	int f = (this->fx_value * b.fx_value) / (1 << fb);
	return (f / (float)(1 << fb));
}

Fixed Fixed::operator/( Fixed a) {
	Fixed tmp;
	tmp.fx_value = roundf(((this->fx_value * (1 << fb)) / a.fx_value));
	a = tmp;
	return a;
}

Fixed Fixed::operator+( Fixed a) {
	Fixed tmp;
	tmp.fx_value = this->fx_value + a.fx_value;
	return tmp;
}

Fixed Fixed::operator-( Fixed a ) {
	Fixed tmp;
	tmp.fx_value = this->fx_value - a.fx_value;
	return tmp;
}

// pre increment == exp ++a
Fixed Fixed::operator++( void ) {
	int	f = roundf((0.00390625 * (1 << fb)));
	this->fx_value = this->fx_value + f;
	return *this;
}

// post increment == exp a++
Fixed Fixed::operator++(int) {
	Fixed old = *this;
	operator++();
	return old;
}

Fixed Fixed::operator--( void ) {
	int	f = roundf((0.00390625 * (1 << fb)));
	this->fx_value = this->fx_value + f;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old = *this;
	operator++();
	return old;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1.fx_value < f2.fx_value)
		return (f1);
	return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
	return ( (f1.fx_value < f2.fx_value) ? f1 : f2 );
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	return ( (f1.fx_value > f2.fx_value) ? f1 : f2 );
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
	return ( (f1.fx_value > f2.fx_value) ? f1 : f2 );
}





















