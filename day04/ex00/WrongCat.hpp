//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#ifndef _WRONGCAT_HPP
#define _WRONGCAT_HPP
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
    void    MakeSound() const;
    WrongCat();
    WrongCat(WrongCat& copy);
    WrongCat& operator=(const WrongCat& to);
    ~WrongCat();
    WrongCat(const std::string &type);
};


#endif //_WRONGCAT_HPP
