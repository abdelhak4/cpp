//
// Created by Abdelhak El moussaoui on 8/31/22.
//

#include "Harl.hpp"
#define CALL_MEMBER_FN(harl,ptr)  ((harl).*(ptr))

void	Harl::debug()
{
	std::cout << "I love having extra bacon";
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}
void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {
			"DEBUG", "ERROR",
			"INFO", "WARNING"
	};
	 void	(Harl::*ptr[]) (void) = {
			&Harl::debug,  &Harl::error,
			&Harl::info, &Harl::warning
	};

 	size_t i = 0;
	while (i < level.length())
	{
		if (levels[i] == level)
			(this->*ptr[i])();
		i++;
	}
}