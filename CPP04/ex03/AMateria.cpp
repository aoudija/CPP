#include "AMateria.hpp"


AMateria::AMateria(){
	type = "empty";
	// std::cout << "AMateria Default constructor\n";
}

AMateria::~AMateria(){
	// std::cout << "AMateria Destructor\n";
}

AMateria::AMateria(std::string const & type){
	this->type = type;
}

std::string const & AMateria::getType() const{
	return type;
}

void	AMateria::use(ICharacter& target){
	if (getType() == "ice"){
		std::cout << "* shoots an ice bolt at "
			<< target.getName() <<"  *\n";}
	else if (getType() == "cure"){
		std::cout << "* heals "
		<< target.getName() <<"'s wounds *\n";}
}
