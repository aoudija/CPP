#include "Animal.hpp"

Animal::Animal(){
	type = "lwl";
	std::cout << "Animal Default constructor\n";
}

Animal::~Animal(){
	std::cout << "Animal Destructor\n";
}

