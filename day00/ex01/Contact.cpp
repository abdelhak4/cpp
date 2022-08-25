//
// Created by Abdelhak El moussaoui on 8/25/22.
//

#include "Contact.hpp"

// here the body of the functions

void	Contact::ADD (
		std::string firstName,
		std::string lastName,
		std::string phoneNumber,
		std::string darkestSecret
		) {

	this->_first_name = firstName;
	this->_last_name = lastName;
	this->_phone_number = phoneNumber;
	this->_darkest_secret = darkestSecret;
}

std::string 	Contact::getter(int index)
{
	if (index == 0)
		return _first_name;
	else if (index == 1)
		return _last_name;
	else if (index == 2)
		return _phone_number;
	return _darkest_secret;
}

void	Contact::SEARCH() {

}

void Contact::EXIT() {

}