#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        WrongCat(WrongCat& ct);
        virtual ~WrongCat();
        const WrongCat& operator=(WrongCat& ct);
        std::string getType() const;
        void makeSound() const;
};

#endif