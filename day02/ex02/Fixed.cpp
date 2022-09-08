
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
	fx_value = roundf(val * (1<<fb));
}

Fixed::Fixed(const Fixed &t)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = t;
}

Fixed &Fixed::operator=(const Fixed &t)
{
	std::cout << "Copy assignment operator constructor called" << std::endl;
	this->fx_value = t.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

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

bool &Fixed::operator>(const Fixed &f) {
	return (fx_value > f.fx_value);
}

bool &Fixed::operator<(const Fixed &f) {
	return (fx_value < f.fx_value);
}

bool &Fixed::operator>=(const Fixed &f) {
	return (fx_value >= f.fx_value);
}

bool &Fixed::operator<=(const Fixed &f) {
	return (fx_value <= f.fx_value);
}

bool &Fixed::operator==(const Fixed &f) {
	return (fx_value == f.fx_value);
}

bool &Fixed::operator!=(const Fixed &f) {
	return (fx_value != f.fx_value);
}

/**** Math operators ***/

float &Fixed::operator*( ) {

}

float &Fixed::operator/( void ) {

}

float &Fixed::operator+( void ) {
	return (fx_value + 0.00390625);
}

float &Fixed::operator-( void ) {
	return (fx_value - 0.00390625);
}

float &Fixed::operator++( void ) {

}

float &Fixed::operator--( void ) {

}

float &Fixed::operator++(int) {

}

float &Fixed::operator--(int) {

}




























+.
00
+
