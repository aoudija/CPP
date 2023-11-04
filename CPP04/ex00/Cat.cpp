#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Default constructor\n";
    type = "Cat";
}

Cat::Cat(Cat& ct){
    std::cout << "Cat Copy constructor\n";
    type = ct.type;
}

Cat::~Cat(){
    std::cout << "Cat Destructor\n";
}

const Cat& Cat::operator=(Cat& ct){
    std::cout << "Cat Copy Assignment Operator\n";
	type = ct.type;
	return *this;
}

std::string Cat::getType() const {
    return type;
}

void Cat::makeSound() const {
    std::cout << "Meaw Meaw!\n";
}
