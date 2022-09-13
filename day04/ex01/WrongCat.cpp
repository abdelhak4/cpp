//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include <iostream>
#include "WrongCat.hpp"

void WrongCat::MakeSound() const {
    std::cout << "WrongCat miaow miaow \n";
}

WrongCat::WrongCat(const std::string& type) {
    this->type = type;
    std::cout << "WrongCat Class name constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Class destructor called" << std::endl;
}

WrongCat::WrongCat()
{
    std::cout << "WrongCat class default constructor called\n";
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy) {
    std::cout << "WrongCat class copy constructor called\n";
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &to) {
    this->type = to.type;
    return *this;
}
