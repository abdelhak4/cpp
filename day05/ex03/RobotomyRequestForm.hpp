//
// Created by Abdelhak El moussaoui on 9/19/22.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ostream>

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( const std::string& name);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& object);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
};



#endif
