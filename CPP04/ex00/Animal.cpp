#include "Animal.hpp"

Animal::Animal(){
    type = "Animal";
    std::cout << "Animal Default constructor\n";
}

Animal::Animal(Animal& an){
    std::cout << "Animal Copy constructor\n";
    type = an.type;
}

Animal::~Animal(){
    std::cout << "Animal Destructor\n";
}

const Animal& Animal::operator=(Animal& an){
    std::cout << "Animal Copy Assignment Operator\n";
	type = an.type;
	return *this;
}

std::string Animal::getType() const {
    return type;
}

void    Animal::makeSound() const {
    std::cout << "Animal Animal Sound!\n";
}


