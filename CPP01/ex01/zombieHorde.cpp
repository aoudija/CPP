#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){
	Zombie*	Z = new Zombie();
	for (int i = 0; i < N; i++){
		std::cout << "!";
		Z[i].set_name(name);
		std::cout << Z[i].get_name() + '\n';
	}
	return (Z);
}
