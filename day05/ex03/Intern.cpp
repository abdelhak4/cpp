//
// Created by Abdelhak El moussaoui on 12/20/22.
//

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "Intern default constructor" << std::endl;
}


Intern::Intern(const Intern& copy) {
	*this = copy;
	std::cout << "Inter copy constructor" << std::endl;
}

Intern &Intern::operator=(const Intern &object) {
	std::cout << "Form operator assigment constructor" << std::endl;
	(void)object;
	return *this;
}

Intern::~Intern() {
	std::cout << "Inter destructor" << std::endl;
}

Form* Intern::makeForm(std::string formName, std::string formTarget) {
	Form *form;
	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	int i = 0;
	while (i < 3)
	{
		if (forms[i] == formName)
			break ;
		i++;
	}
	switch (i) {
		case 0:
			form = new RobotomyRequestForm(formTarget);
			break;
		case 1:
			form = new PresidentialPardonForm(formTarget);
			break;
		case 2:
			form = new ShrubberyCreationForm(formTarget);
			break;
		default:
			throw std::runtime_error("no such form name");
	}
	std::cout << "Inern creates " << formName << std::endl;
	return form;
}
