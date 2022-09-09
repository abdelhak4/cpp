//
// Created by Abdelhak El moussaoui on 8/31/22.
//

#include "Harl.hpp"
#define CALL_MEMBER_FN(harl,ptr)  ((harl).*(ptr))

void	Harl::debug() {
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::error() {
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}
void	Harl::info() {
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << std::endl;
}

void	Harl::warning() {
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free";
	std::cout << std::endl;
}

void	Harl::complain(std::string level) {
	int	i = 0;
	std::string levels[4] = {
			"DEBUG", "INFO",
			"WARNING", "ERROR"
	};
	while (i < levels->length())
	{
		if (levels[i] == level)
			break;
		i++;
	}
	switch (i) {
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			Harl::error();
			break ;
		default:
			std::cout << "no such level" << std::endl;
			break;
	}
}