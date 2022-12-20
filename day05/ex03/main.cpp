//
// Created by Abdelhak El moussaoui on 9/15/22.
//

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy rdequest", "Bender");
		delete rrf;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}