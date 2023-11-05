#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Default constructor\n";
    type = "Cat";
    br = new Brain();
}

Cat::Cat(Cat& ct){
    std::cout << "Cat Copy constructor\n";
    br = new Brain(*ct.br);
    // br = ct.br;
    type = ct.type;
}

Cat::~Cat(){
    std::cout << "Cat Destructor\n";
    delete br;
}

const Cat& Cat::operator=(Cat& ct){
    br = new Brain(*ct.br);
    // br = ct.br;
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

void Cat::setbridea(std::string s, int i){
    br->setidea(s, i);
}
std::string Cat::getbridea(int i){
    return br->GetIdeas(i);
}

