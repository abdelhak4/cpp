

#ifndef EX02_BUREAUCRAT_HPP
#define EX02_BUREAUCRAT_HPP
#include "Form.hpp"
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
class Form;
class Bureaucrat  {
	class GradeTooHighException :public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException :public std::exception {
	public:
		const char* what() const throw();
	};
private:
	const std::string	_name;
	short 				_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, short grade);
	Bureaucrat(Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& from);
	 ~Bureaucrat();
	const std::string &getName() const;
	short getGrade() const;
	void 	increment();
	void	decrement();
	void	signFrom(const Form& form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& s);

#endif //EX02_BUREAUCRAT_HPP
