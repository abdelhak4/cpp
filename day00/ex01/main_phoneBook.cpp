/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:04:30 by ael-mous          #+#    #+#             */
/*   Updated: 2022/08/25 18:05:41 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


void toPrint(std::string s)
{
	if ( s.length() > 10)
		std::cout << s.replace(9, 1, ".").substr(0, 10) << " | ";
	else
		std::cout <<  std::setw(10) << s <<  " | ";
}

static void search_for_contact(PhoneBook phoneBook, int size, bool state, int in = 0) {
	Contact contact;
	int i = 0;

	if (state) {
		while (i < size) {
			contact = phoneBook.getContact(i);
			toPrint("index");
			toPrint("first name");
			toPrint("last name");
			toPrint("nick name");
			std::cout << std::endl;
			cout << std::setw(10) << i << " | ";
			toPrint(contact.getFirstName());
			toPrint(contact.getLastName());

			toPrint(contact.getNickname());;
			std::cout << std::endl;
			i++;
		}
	}
	else
	{
		contact = phoneBook.getContact(in);
		cout << "first name :" << contact.getFirstName() << std::endl;
		cout << "last name  :" << contact.getLastName() << std::endl;
		cout << "nick name	:" << contact.getNickname() << std::endl;
		cout << "Phone Number :" << contact.getPhoneNumber() << std::endl;
		cout << "dark secret  :" << contact.getDarkestSecret() << std::endl;
	}
}

static int getIndex(std::string &print)
{
	std::string str;

	cout << print << "\t:";
	std::getline(cin, str);
	while (str.empty() || std::cin.eof() == 1 || str.find_first_not_of(' ') == std::string::npos || str.find_first_not_of("0123456789") != std::string::npos)
	{
		if (std::cin.eof() == 1) {
			std::clearerr(stdin);
			std::cin.clear();
			cout << std::endl;
		}
		cout << "Please Enter a valid string\t:";
		std::getline(cin, str);
	}
	return str.toi;

}static std::string getString(std::string &print)
{
	std::string str;

	cout << print << "\t:";
	std::getline(cin, str);
	if (str.empty() || std::cin.eof() == 1 || str.find_first_not_of(' ') == std::string::npos)
	{

		while (str.empty() || std::cin.eof() == 1 || str.find_first_not_of(' ') == std::string::npos)
		{
			if (std::cin.eof() == 1) {
				std::clearerr(stdin);
				std::cin.clear();
				cout << std::endl;
			}
			cout << "Please Enter a valid string\t:";
			std::getline(cin, str);
		}
	}
	return str;

}

PhoneBook	add(PhoneBook phoneBook, int i) {
	std::string	msg;
	std::string	str;

	msg = "Enter The First Name";
	str = getString(msg);
	msg = "FirstName";
	phoneBook.setContact(i, msg, str);
	msg = "Enter The Last Name";
	str = getString(msg);
	msg = "LastName";
	phoneBook.setContact(i, msg, str);

	msg = "Enter The NickName";
	str = getString(msg);
	msg = "NickName";
	phoneBook.setContact(i, msg, str);
	/// get Phone Number
	msg = "Enter The Phone Number";
	str = getString(msg);
	while (str.find_first_not_of("0123456789") != std::string::npos)
	{
		cout << "Please Enter only Numbers!!";
		std::getline(std::cin, str);
		if (std::cin.eof() == 1) {
			std::clearerr(stdin);
			std::cin.clear();
		}
	}
	msg = "PhoneNumber";
	phoneBook.setContact(i, msg, str);
	/// get secret

	msg = "Enter The Darkest Secret";
	str = getString(msg);
	msg = "Secret";
	phoneBook.setContact(i, msg, str);
	return phoneBook;
}

int main() {
	int index_of;
	int size;
	PhoneBook phoneBook;
	int i;
	int j;
	std::string str;

	i = 0;
	while (true) {
		std::cout << "Please note the commands are - ADD - SEARCH - EXIT" << std::endl;
		std::cout << "Enter a command\t:";
		std::getline(std::cin, str);
		if (i > 7) {
			i = 0;
		}
		size = 0;
		if (std::cin.eof() == 1) {
			std::clearerr(stdin);
			std::cin.clear();
		}
		if (str == "ADD") {
			phoneBook = add(phoneBook, i);
			i++;
		}
		j = 0;
		while (!phoneBook.getContact(j).getter(0).empty() && j < 8) {
			size++;
			j++;
		}
		if (str == "SEARCH" && size != 0) {
			search_for_contact(phoneBook, size, true);
			index_of = 0;
			std::string msg = "Enter an Index:";
			std::string nbr = getIndex(msg);
			std::cout << nbr;
//			while (!(index_of < size && index_of >= 0) || cin.fail())
//			{
//				cout << "Enter an index to Search\t:";
//				std::cin >> index_of;
//				if (cin.fail()) {
//					std::cin.clear();
//					std::cin.ignore(256,'\n');
//				}

			search_for_contact(phoneBook, size, false, index_of);
		} else if (str == "EXIT")
			break;
	}
}
