#include <iostream>
#include <string>
#include "Animal.hpp"


class Dog:public Animal{
    public:
        Dog();
        Dog(Dog& dg);
        ~Dog();
        const Dog& operator=(Dog& dg);
        std::string getType() const;
        void	makeSound() const;
};