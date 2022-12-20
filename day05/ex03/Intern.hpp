//
// Created by Abdelhak El moussaoui on 12/20/22.
//

#ifndef EX00_INTERN_HPP
#define EX00_INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(const Intern& copy);
		Intern& operator=(const Intern& object);
		~Intern();
		Form *makeForm(std::string formName, std::string formTarget);
};



#endif //EX00_INTERN_HPP
