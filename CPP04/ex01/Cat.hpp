#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Dog.hpp"

class Cat: public Animal{
    Brain*	br;
    public:
        Cat();
        Cat(Cat& ct);
        ~Cat();
        const Cat& operator=(Cat& ct);
        std::string getType() const;
        void makeSound() const;
        void setbridea(std::string s, int i);
        std::string getbridea(int i);
};
#endif