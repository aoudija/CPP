#include "Zombie.hpp"

void	randomChump(std::string name){
	Zombie* Z = newZombie(name);
	Z->announce();
	delete Z;
}
