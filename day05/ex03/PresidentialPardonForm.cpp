//
// Created by Abdelhak El moussaoui on 9/19/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("default", 25, 5) {
	std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) {
	std::cout << "PresidentialPardonForm copy constructor" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &object) {
	std::cout << "PresidentialPardonForm Copy assignment operator" << std::endl;
	(void )object;
	return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const &executor) const {

	if (getGradeToSign() == 72 && getGradeToExecute() == 5)
	{
		std::cout << "Informs that" << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
		throw std::runtime_error("the grade and gradeToExecute not fit the requirements");
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& name) : Form(name, 72, 45) {
	std::cout << "PresidentialPardonForm parametrized constructor called" << std::endl;
}