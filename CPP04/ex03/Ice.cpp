#include "Ice.hpp"

Ice::Ice(){
	type = "ice";
    // std::cout<< "Ice Default constructor\n";
}

Ice::Ice(const Ice& ic){
	// std::cout << "Ice copy construtor\n";
	*this = ic;
}

Ice::~Ice(){
    // std::cout<< "Ice Destructor\n";
}

const Ice& Ice::operator=(const Ice& ic){
	// std::cout << "Ice copyassignment operator\n";
	type = ic.type;
	return *this;
}

AMateria* Ice::clone() const{
	Ice* ic = new Ice();
	return ic;
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() <<"  *\n";
}
