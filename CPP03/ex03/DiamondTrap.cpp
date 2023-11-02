#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap default constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
	ClapTrap::Name = (name + "_clap_name");
	Hit_points = FragTrap::Hit_points;
	Energie_points = ScavTrap::Energie_points;
	Attack_damage = FragTrap::Attack_damage;
	Name = name;
	std::cout << "DiamondTrap constructor called"<<std::endl;
}

void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& dt){
	Name = dt.Name;
}

DiamondTrap DiamondTrap::operator=(DiamondTrap& dt){
	Name = dt.Name;
	return *this;
}

void	DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name : |" + Name
		+ "| ClapTrap name: |" + ClapTrap::Name + "|"<< std::endl;
}
