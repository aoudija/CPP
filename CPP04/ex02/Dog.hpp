#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal{
    Brain*	br;
    public:
        Dog();
        Dog(Dog& dg);
        ~Dog();
        const Dog& operator=(Dog& dg);
        std::string getType() const;
        void	makeSound() const;
};

#endif