//
// Created by Abdelhak El moussaoui on 8/25/22.
//

#ifndef CPP_CONTACT_HPP
#define CPP_CONTACT_HPP
#include <iostream>

class Contact {
public:
	void	ADD (
			std::string firstName,
			std::string lastName,
			std::string phoneNumber,
			std::string darkestSecret
			); // save a new contact

	void	SEARCH(); // display a specific contact
	void	EXIT(); //The program quits and the contacts are lost forever!
	std::string getter(int index);
private:
	std::string _first_name;
	std::string _last_name;
	std::string _phone_number;
	std::string _darkest_secret;
};


#endif //CPP_CONTACT_HPP
