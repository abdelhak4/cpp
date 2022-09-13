//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#ifndef _DOG_HPP
#define _DOG_HPP
#include "Animal.hpp"


class Dog : public Animal {
public:
    void    MakeSound() const;
    Dog();
    Dog(Dog& copy);
    Dog& operator=(const Dog& to);
    ~Dog();
    Dog(const std::string &type);
};


#endif //_DOG_HPP
