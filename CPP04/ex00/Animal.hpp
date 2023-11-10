#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
    protected:
        std::string type;
    public:
		Animal();
		Animal(Animal& an);
		virtual ~Animal();
		const Animal& operator=(Animal& an);
		virtual std::string getType() const ;
		virtual void    makeSound() const ;
};
#endif
