//
// Created by Abdelhak El moussaoui on 9/19/22.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

#include <iostream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm( void );
		 ShrubberyCreationForm( const std::string& name);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& object);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
};



#endif
