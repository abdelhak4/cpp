//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include "WrongAnimal.hpp"
#include <iostream>

void WrongAnimal::MakeSound() const {
    std::cout << "You can't understand WrongAnimal's sound\n";
}

WrongAnimal::WrongAnimal(const std::string& type) {
    std::cout << "Base Class name constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Base Class destructor called" << std::endl;
}

WrongAnimal::WrongAnimal()
{
    std::cout << "Base class default constructor called\n";
    type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy) {
    std::cout << "Base class copy constructor called\n";
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &to) {
    this->type = to.type;
    return *this;
}

const std::string &WrongAnimal::getType() const {
    return type;
}
