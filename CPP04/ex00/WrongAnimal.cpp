#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    type = "wrong animal";
    std::cout << "WrongAnimal Default constructor\n";
}

WrongAnimal::WrongAnimal(WrongAnimal& an){
    std::cout << "WrongAnimal Copy constructor\n";
    type = an.type;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor\n";
}

const WrongAnimal& WrongAnimal::operator=(WrongAnimal& an){
    std::cout << "WrongAnimal Copy Assignment Operator\n";
	type = an.type;
	return *this;
}

std::string WrongAnimal::getType() const {
    std::cout << "hey\n";
    return type;
}

void    WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal WrongAnimal Sound!\n";
}
