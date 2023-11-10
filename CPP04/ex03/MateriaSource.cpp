#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0;i < 4;i++){
		am[i] = NULL;
	}
    // std::cout << "MateriaSource default constructor\n";
}
MateriaSource::MateriaSource(const MateriaSource& mts){
	*this = mts;
    std::cout << "MateriaSource copy constructor\n";
}

const MateriaSource& MateriaSource::operator=(const MateriaSource& mts){
	for (int i = 0;i < 4;i++){
		if (mts.am[i]){
			if (am[i]){
				delete am[i];
				am[i] = am[i]->clone();
			}
			else
				am[i] = am[i]->clone();
		}
	}
	return *this;
    // std::cout << "MateriaSource copy assignment operator\n";
}

MateriaSource::~MateriaSource(){
	for (int i = 0;i < 4;i++){
		if (am[i])
			delete am[i];
	}
    // std::cout << "MateriaSource destructor\n";
}

void MateriaSource::learnMateria(AMateria* a){
	for (int i = 0;i < 4;i++){
		if (!am[i] && a){
			am[i] = a->clone();
			delete a;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	AMateria* t;
	t = NULL;
	for (int i = 0;i < 4;i++){
		if (am[i]){
			if (am[i]->getType() == type){
				t = am[i]->clone();
				return t;
			}
		}
	}
	return t;
}



