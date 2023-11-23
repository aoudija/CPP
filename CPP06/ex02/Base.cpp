#include "Base.hpp"
#include <cstdlib>
#include <ctime>

Base::~Base(){}

Base * generate(void){
	std::srand(std::time(0));
	int r = std::rand() % 3;
	if (r == 0)
		return new A;
	if (r == 1)
		return new B;
	return new C;
}

void identify(Base* p){
	A* a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "p is pointing to A" << std::endl;
	B* b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "p is pointing to B" << std::endl;
	C* c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "p is pointing to C" << std::endl;
}

void identify(Base& p){

	try{
		A a = dynamic_cast<A&>(p);
		std::cout << "p is pointing to A" << std::endl;
	}
	catch(std::bad_cast& e){
	}
	try{
		B b = dynamic_cast<B&>(p);
		std::cout << "p is pointing to B" << std::endl;
	}
	catch(std::bad_cast& e){
	}
	try{
		C c = dynamic_cast<C&>(p);
		std::cout << "p is pointing to C" << std::endl;
	}
	catch(std::bad_cast& e){
	}
}

