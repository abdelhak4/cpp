#include "PhoneBook.hpp"

Contact PhoneBook::getContact(int i) {
	return contact[i];
}

void PhoneBook::setContact(const int i, std::string& toSet, std::string& str) {
	if (toSet == "FirstName")
		contact[i].setFirstName(str);
	else if (toSet == "LastName")
		contact[i].setLastName(str);
	else if (toSet == "PhoneNumber")
		contact[i].setPhoneNumber(str);
	else if (toSet == "NickName")
		contact[i].setNickname(str);
	else
		contact[i].setDarkestSecret(str);
}
