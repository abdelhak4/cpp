//
// Created by Abdelhak El moussaoui on 9/19/22.
//

#ifndef EX00_PRESIDENTIALPARDONFORM_HPP
#define EX00_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const std::string& name);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& object);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
};

#endif //EX00_PRESIDENTIALPARDONFORM_HPP
