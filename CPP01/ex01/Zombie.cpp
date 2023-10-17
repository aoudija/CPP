#include "Zombie.hpp"

void	Zombie::set_name(std::string name){
	this->name = name;
}

std::string	Zombie::get_name(void){
	return (this->name);
}

void	Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(){
	std::cout << this->name << " was destroyed\n";
}
