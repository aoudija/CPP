#include "ScavTrap.hpp"

int main(){
	ScavTrap c("h");
	c.attack("target");
	c.takeDamage(2);
	c.beRepaired(1);
	c.guardGate();
}

