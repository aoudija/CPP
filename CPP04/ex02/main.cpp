#include "Cat.hpp"
void l(){
    system("leaks Abstract");
}

int main(){
    // atexit(l);
    // Animal test;
	Cat	i;
	Dog	j;
    i.makeSound(); //will output the cat sound!
    j.makeSound();
    std::cout << j.getType() << " " << std::endl;
    std::cout << i.getType() << " " << std::endl;
}
