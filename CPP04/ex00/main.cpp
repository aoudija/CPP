#include "Cat.hpp"
#include "WrongCat.hpp"

void l(){
    system("leaks Sound");
}

int main(){
    // atexit (l);
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;

    // const WrongAnimal* Wmeta = new WrongAnimal();
    // const WrongAnimal* Wi = new WrongCat();
	// std::cout << Wi->getType() << " " << std::endl;

	// Wi->makeSound();
	// Wmeta->makeSound();
	// delete Wi;
	// delete Wmeta;
}
