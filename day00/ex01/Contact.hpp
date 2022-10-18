//
// Created by Abdelhak El moussaoui on 8/25/22.
//

#ifndef CPP_CONTACT_HPP
#define CPP_CONTACT_HPP
#include <iostream>

class Contact {
	public:
		std::string getter(int index);
		void setFirstName(const std::string &firstName);
		void setLastName(const std::string &lastName);
		void setPhoneNumber(const std::string &phoneNumber);
		void setDarkestSecret(const std::string &darkestSecret);
		void setNickname(const std::string &nickname);
		const std::string &getFirstName() const;
		const std::string &getLastName() const;
		const std::string &getNickname() const;
		const std::string &getPhoneNumber() const;
		const std::string &getDarkestSecret() const;

	private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};


#endif //CPP_CONTACT_HPP
