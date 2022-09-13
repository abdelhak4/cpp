//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
//    const WrongAnimal* wrongAnimal = new WrongAnimal();
//    const WrongAnimal* w = new WrongCat();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    while(1);
//    const Animal* meta = new Animal();
//    const Animal* j = new Dog();
//    const Animal* i = new Cat();
//    std::cout << j->getType() << " " << std::endl;
//    std::cout << i->getType() << " " << std::endl;
//    i->MakeSound(); //will output the cat sound!
//    j->MakeSound();
//    meta->MakeSound();
//    delete meta;
//    delete j;
//    delete i;
    return 0;
}