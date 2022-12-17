//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>


/// BASE CLASS

class Animal {
protected:
    std::string type;
public:
	virtual void    MakeSound() const = 0;
    Animal();
    Animal(Animal& copy);
    Animal& operator=(const Animal& to);
	virtual ~Animal();
    Animal(const std::string &type);
    const std::string &getType() const;
};


#endif
