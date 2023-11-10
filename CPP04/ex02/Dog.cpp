#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "Dog Default constructor\n";
    br = new Brain();
}

Dog::Dog(Dog& dg){
    std::cout << "Dog Copy constructor\n";
    br = new Brain(*dg.br);
    type = dg.type;
}

Dog::~Dog(){
    std::cout << "Dog Destructor\n";
    delete br;
}

const Dog& Dog::operator=(Dog& dg){
    delete br;
    br = new Brain(*dg.br);
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
