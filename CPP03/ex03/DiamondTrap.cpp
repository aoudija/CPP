#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap default constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
	ClapTrap::Name = (name + "_clap_name");
	Hit_points = 100;
	Energie_points = 50;
	Attack_damage = 30;
	// Hit_points = FragTrap::Hit_points;
	// Energie_points = ScavTrap::Energie_points;
	// Attack_damage = FragTrap::Attack_damage;
	// std::cout << "fragdiamond(attackingdamage): " << Attack_damage << '\n';
	Name = name;
	std::cout << "DiamondTrap constructor called"<<std::endl;
}

void	DiamondTrap::show(){
	std::cout << "hp : "<< Hit_points << ", en : " << Energie_points << " attdamag : " << Attack_damage <<std::endl;
}

void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& dt){
	Name = dt.Name;
	Hit_points = dt.Hit_points;
	Energie_points = dt.Energie_points;
	Attack_damage = dt.Attack_damage;
}

DiamondTrap DiamondTrap::operator=(DiamondTrap& dt){
	Name = dt.Name;
	Hit_points = dt.Hit_points;
	Energie_points = dt.Energie_points;
	Attack_damage = dt.Attack_damage;
	return *this;
}

void	DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name : |" + Name
		+ "| ClapTrap name: |" + ClapTrap::Name + "|"<< std::endl;
}
