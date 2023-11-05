#include "Cat.hpp"
#include "WrongCat.hpp"

void	l(){
	system("leaks Brain");
}

int main(){
	// atexit(l);
	// Animal* an[4];
	// an[0] = new Cat();
	// an[1] = new Cat();
	// an[2] = new Dog();
	// an[3] = new Dog();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;
	// delete i;
	// for (int i = 0; i < 4;i++){
	// 	delete an[i];
	// }
	const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    delete i;
    delete j;
    delete meta;
}


// Cat ct, ct2;
// ct.setbridea("we should eat", 0);
// ct2.setbridea("am not hungry", 0);
// Cat ct3(ct2);
// ct3.setbridea("lets go out", 0);
// std::cout << "ct1: " <<  ct.getbridea(0)
// 	<< std::endl;
// std::cout << "ct2: " <<  ct2.getbridea(0)
// 	<< std::endl;
// std::cout << "ct3: " <<  ct3.getbridea(0)
// 	<< std::endl;