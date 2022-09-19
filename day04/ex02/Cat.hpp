//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#ifndef _CAT_HPP
#define _CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
private:
    Brain* brain;
public:
    void    MakeSound() const;
    Cat();
    Cat(Cat& copy);
    Cat& operator=(const Cat& to);
    ~Cat();
    Cat(const std::string &type);

	void getBrain() const;
	void setBrain(Brain *brain);
};


#endif //_CAT_HPP
