//
// Created by Abdelhak El moussaoui on 9/19/22.
//

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void) : Form("default", 72, 45) {
	std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) {
	std::cout << "RobotomyRequestForm copy constructor" << std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &object) {
	std::cout << "RobotomyRequestForm Copy assignment operator" << std::endl;
	(void )object;
	return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const &executor) const {
	if (getGradeToSign() == 72 && getGradeToExecute() == 45)
	{
		std::cout << "Makes some drilling noises. Then, informs that " << executor.getName()
			<< "has been robotomized successfully 50% of the time. Otherwise, informs that the robotomy failed" << std::endl;
	}
	else
		throw std::runtime_error("the grade and gradeToExecute not fit the requirements");
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& name) : Form(name, 72, 45) {
	std::cout << "RobotomyRequestForm parametrized constructor called" << std::endl;
}
