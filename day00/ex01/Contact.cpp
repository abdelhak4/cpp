//
// Created by Abdelhak El moussaoui on 8/25/22.
//

#include "Contact.hpp"

// here the body of the functions

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

void Contact::setFirstName(const std::string &firstName) {
	_first_name = firstName;
}

void Contact::setLastName(const std::string &lastName) {
	_last_name = lastName;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
	_phone_number = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	_darkest_secret = darkestSecret;
}

void Contact::setNickname(const std::string &nickname) {
	_nickname = nickname;
}

const std::string &Contact::getFirstName() const {
	return _first_name;
}

const std::string &Contact::getLastName() const {
	return _last_name;
}

const std::string &Contact::getNickname() const {
	return _nickname;
}

const std::string &Contact::getPhoneNumber() const {
	return _phone_number;
}

const std::string &Contact::getDarkestSecret() const {
	return _darkest_secret;
}
