//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include <iostream>
#include "Brain.hpp"


//Brain::Brain(const std::string& type)  {
//    std::cout << "Brain Class name constructor called" << std::endl;
//}

Brain::~Brain() {
    std::cout << "Brain Class destructor called" << std::endl;
}

Brain::Brain()
{
    std::cout << "Brain class default constructor called\n";
}

Brain::Brain(Brain &copy) {
    std::cout << "Brain class copy constructor called\n";
    *this = copy;
}

Brain &Brain::operator=(const Brain &to) {
    for (int i = 0; i < 100; ++i) {
        ideas[i] = to.ideas[i];
    }
    return *this;
}
