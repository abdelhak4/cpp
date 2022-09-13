//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#ifndef _CAT_HPP
#define _CAT_HPP
#include "Animal.hpp"

class Cat: public Animal {
public:
    void    MakeSound() const;
    Cat();
    Cat(Cat& copy);
    Cat& operator=(const Cat& to);
    ~Cat();
    Cat(const std::string &type);
};


#endif //_CAT_HPP
