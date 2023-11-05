#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat Default constructor\n";
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& ct){
    std::cout << "WrongCat Copy constructor\n";
    type = ct.type;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor\n";
}

const WrongCat& WrongCat::operator=(WrongCat& ct){
    std::cout << "WrongCat Copy Assignment Operator\n";
	type = ct.type;
	return *this;
}

std::string WrongCat::getType() const {
    return type;
}

void WrongCat::makeSound() const {
    std::cout << "Wrongcat Sound!\n";
}