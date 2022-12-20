//
// Created by Abdelhak El moussaoui on 9/19/22.
//

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too High";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too Low";
}

const std::string &Form::getName() const {
	return _name;
}

bool Form::isSigned() const {
	return _is_signed;
}

short Form::getGradeToSign() const {
	return _gradeToSign;
}

short Form::getGradeToExecute() const {
	return _gradeToExecute;
}

Form::Form(
		const std::string &name, short gradeToSign, short gradeToExecute
		) : _name(name),
			_gradeToSign(gradeToSign),
			_gradeToExecute(gradeToExecute) {
	std::cout << "Form Parametrized constructor" << std::endl;
	_is_signed = false;
	if (gradeToExecute < 1 || gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form() : _name("[empty]"), _gradeToSign(150), _gradeToExecute(150) {
	std::cout << "Form Default constructor" << std::endl;
	_is_signed = false;
}

Form &Form::operator=(const Form &copy) {
	std::cout << "Form operator assigment constructor" << std::endl;
	_is_signed = copy._is_signed;
	return *this;
}

Form::Form(const Form &copy) : _gradeToSign(2), _gradeToExecute(2) {
	*this = copy;
}


Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

void Form::setSigned(bool sign) {
	_is_signed = sign;
}
void Form::beSigned(Bureaucrat const &bureaucrat) {
	if (_gradeToSign <= bureaucrat.getGrade())
		this->_is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream &os, const Form &form) {
	os << "_name: " << form.getName() << " is_signed: "
	   << form.isSigned() << " gradeToSign: "
	   << form.getGradeToSign() << " gradeToExecute: "
	   << form.getGradeToExecute();
	return os;
}

