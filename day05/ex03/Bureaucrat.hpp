

#ifndef EX02_BUREAUCRAT_HPP
#define EX02_BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat  {
	public:
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
		void	executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& s);

#endif //EX02_BUREAUCRAT_HPP
