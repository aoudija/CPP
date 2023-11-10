#include "MateriaSource.hpp"

void l(){
	system("leaks Interface");
}

int main(){
	// atexit(l);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
	// ICharacter* Main = new Character("Amine");
	// AMateria *I = src->createMateria("ice");
	// AMateria *C = src->createMateria("cure");
	// Main->equip(I);
	// Main->unequip(0);
	// delete I;
	// Main->equip(C);
	// Main->equip(C);
	// delete C;
	// Main->use(0, *Main);
	// Main->use(1, *Main);
	// delete Main;
	// delete src;
