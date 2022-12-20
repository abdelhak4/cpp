//
// Created by Abdelhak El moussaoui on 9/19/22.
//

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(
		const std::string& name) : Form(name, 145, 137) {
	std::cout << "ShrubberyCreationForm parametrized constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) {
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &object) {
	std::cout << "ShrubberyCreationForm Copy assignment operator" << std::endl;
	(void )object;
	return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const &executor) const {
	if (getGradeToSign() == 145 && getGradeToExecute() == 137)
	{
		std::cout << "Create a file" << executor.getName()
			<< "_shrubbery in the working directory, and writes ASCII trees inside it." << std::endl;
	}
	else
		throw std::runtime_error("the grade and gradeToExecute not fit the requirements");
}