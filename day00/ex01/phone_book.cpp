/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:04:30 by ael-mous          #+#    #+#             */
/*   Updated: 2022/08/25 15:04:31 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	read_line(std::string str, std::string data)
{
	std::cout << str << std::endl;
	std::getline(std::cin, data);
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
//	while (1)
//	{
		std::cout << "Please note the commands are - add - search - exit"<< std::endl;
		std::cout << "Enter a command" << std::endl;
		std::getline(std::cin, str);
		if (str == "add")
		{
			read_line("Enter the first name", firstName);
			// error handling here!!
			read_line("Enter the last name", lastName);
			read_line("Enter the phone number", phoneNumber);
			read_line("Enter the darkest secret", darkestSecret);
			phoneBook.contact[i].ADD(firstName, lastName, phoneNumber, darkestSecret);
			std::cout << phoneBook.contact[i].getter() << std::endl;
			//i++;
		}
////			adding_contact();
//		else if (str == "search")
//		{
//
//		}
////			search_for_conract();
//		else if (str == "exit")
//			break ;
//	}
}