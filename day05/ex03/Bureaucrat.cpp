//
// Created by Abdelhak El moussaoui on 9/15/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor called \n";
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default destructor called \n";
}

Bureaucrat::Bureaucrat(const std::string name, short grade) : _name(name) {
	std::cout << "Parametrized constructor called \n";
	if (grade > 0 && grade <= 150)
	{
		_grade = grade;
	}
	else if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	else
		throw Bureaucrat::GradeTooLowException();
}

const std::string &Bureaucrat::getName() const {
	return _name;
}

short Bureaucrat::getGrade() const {
	return _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) {
	std::cout << "copy constructor called \n";
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &from) {
	std::cout << "operator constructor called \n";
	this->_grade = from._grade;
	return *this;
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too Low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too High";
}

void Bureaucrat::increment() {
	if (_grade - 1 > 0)
		_grade--;
	else
		throw	GradeTooHighException();
}

void Bureaucrat::decrement() {
	if (_grade < 150)
		_grade++;
	else
		throw	GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& o) {
		os << o.getName() << ", bureaucrat grade " << o.getGrade();
		return os;
}

void Bureaucrat::signFrom(const Form& form) {
	if (form.isSigned())
		std::cout << this->_name << "signed" << form.getName();
	else
	{
		std::cout << this->_name << "couldn't signed" << form.getName();
		std::cout << "because is Not signed" << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) {
	if (form.isSigned())
		std::cout << _name <<" executed " << form.getName() << std::endl;
	else
		std::cout << "try next time" << std::endl;
}
