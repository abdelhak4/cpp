//
// Created by Abdelhak El moussaoui on 9/19/22.
//

#ifndef EX00_FORM_HPP
#define EX00_FORM_HPP
#include <exception>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
	private:
		const std::string	_name;
		bool				_is_signed;
		const short			_gradeToSign;
		const short			_gradeToExecute;
	public:
		Form(const std::string &name, short gradeToSign, short gradeToExecute);
		Form();
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		virtual ~Form();
		const 	std::string &getName() const;
		bool 	isSigned() const;
		short 	getGradeToSign() const;
		short 	getGradeToExecute() const;
		void 	setSigned(bool sign);
		void	beSigned(Bureaucrat const & bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const Form &form);


#endif //EX00_FORM_HPP
