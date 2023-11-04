#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "Dog Default constructor\n";
}

Dog::Dog(Dog& dg){
    std::cout << "Dog Copy constructor\n";
    dg.type = dg.type;
}

Dog::~Dog(){
    std::cout << "Dog Destructor\n";
}

const Dog& Dog::operator=(Dog& dg){
    std::cout << "Dog Copy Assignment Operator\n";
	type = dg.type;
	return *this;
}

std::string Dog::getType() const {
    return type;
}

void Dog::makeSound() const {
    std::cout << "Bark Bark!\n";
}
