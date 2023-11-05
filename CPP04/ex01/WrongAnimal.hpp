#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal& an);
        virtual ~WrongAnimal();
        const WrongAnimal& operator=(WrongAnimal& an);
        virtual std::string getType() const ;
        void    makeSound() const ;
};
#endif