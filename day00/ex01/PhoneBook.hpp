//
// Created by Abdelhak El moussaoui on 8/25/22.
//

#ifndef CPP_PHONEBOOK_HPP
#define CPP_PHONEBOOK_HPP
#include "Contact.hpp"
#include <istream>

class PhoneBook {
private:
	Contact	contact[8];
public:
	Contact getContact(int i);
	void setContact(int i, std::string& toSet, std::string& str);
};


#endif //CPP_PHONEBOOK_HPP
