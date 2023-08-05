#include "Zombie.hpp"

Zombie*	newZombie(std::string name){
	Zombie*	Z = new Zombie;
	Z->set_name(name);
	return (Z);
}
