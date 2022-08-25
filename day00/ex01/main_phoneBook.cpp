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

std::string	read_line(std::string str, std::string data)
{
	std::cout << str << std::endl;
	std::getline(std::cin, data);
	return (data);
}

static void search_for_contact(PhoneBook phoneBook, int index) {
	int i = 0;
	int j;

	while(i < index) {
		j = 0;
		while (j < 4)
		{
			if (phoneBook.contact[i].getter(j).length() > 10)
				std::cout << phoneBook.contact[i].getter(j).replace(9, 1, ".").substr(0, 10);
			else
				std::cout << std::setw(10 - phoneBook.contact[i].getter(j).length() -1 ) <<phoneBook.contact[i].getter(j);
			if (j + 1 < 4)
				std::cout << " | ";
			j++;
		}
		std::cout << std::endl;
		i++;
	}
}
int main(void)
{
	PhoneBook	phoneBook;
	int 		i;
	std::string str;
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
	std::string darkestSecret;
	i = 0;
	while (1) {
		std::cout << "Please note the commands are - add - search - exit" << std::endl;
		std::cout << "Enter a command" << std::endl;
		std::getline(std::cin, str);
		if (str == "add") {
			firstName = read_line("Enter the first name", firstName);
			// error handling here!!
			lastName = read_line("Enter the last name", lastName);
			phoneNumber = read_line("Enter the phone number", phoneNumber);
			darkestSecret = read_line("Enter the darkest secret", darkestSecret);
			phoneBook.contact[i].ADD(firstName, lastName, phoneNumber, darkestSecret);
			i++;
		}
//			adding_contact();
		else if (str == "search") {
			search_for_contact(phoneBook, i);
		} else if (str == "exit")
			break;
	}
}
