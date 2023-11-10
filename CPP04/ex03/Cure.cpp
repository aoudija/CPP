#include "Cure.hpp"

Cure::Cure(){
	type = "cure";
    // std::cout<< "Cure Default constructor\n";
}

Cure::Cure(const Cure& c){
	// std::cout << "Cure copy construtor\n";
	*this = c;
}

Cure::~Cure(){
    // std::cout<< "Cure Destructor\n";
}

const Cure& Cure::operator=(const Cure& c){
	// std::cout << "Cure copyassignment operator\n";
	type = c.type;
	return *this;
}

AMateria* Cure::clone() const{
	Cure* c = new Cure();
	return c;
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals "
		<< target.getName() <<"'s wounds *\n";
}