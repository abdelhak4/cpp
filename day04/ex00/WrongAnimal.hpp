//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#ifndef _WRONGANIMAL_HPP
#define _WRONGANIMAL_HPP


#include <string>

class WrongAnimal {
protected:
    std::string type;
public:
    void    MakeSound() const;
    WrongAnimal();
    WrongAnimal(WrongAnimal& copy);
    WrongAnimal& operator=(const WrongAnimal& to);
    ~WrongAnimal();
    WrongAnimal(const std::string &type);
    const std::string &getType() const;
};


#endif //_WRONGANIMAL_HPP
