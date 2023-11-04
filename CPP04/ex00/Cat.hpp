#include <iostream>
#include <string>
#include "Dog.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(Cat& ct);
        ~Cat();
        const Cat& operator=(Cat& ct);
        std::string getType() const;
        void makeSound() const;
};