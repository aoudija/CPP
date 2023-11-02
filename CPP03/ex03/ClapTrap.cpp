#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	Hit_points = 10;
    Energie_points = 10;
    Attack_damage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name){
    this->Name = Name;
    Hit_points = 10;
    Energie_points = 10;
    Attack_damage = 0;
	std::cout << "ClapTrap constructor called"
		<< std::endl;
}
ClapTrap::ClapTrap(ClapTrap& ct){
	Name = ct.Name;
	Hit_points = ct.Hit_points;
	Energie_points = ct.Energie_points;
	Attack_damage = ct.Attack_damage;
	std::cout << "ClapTrap copy constructor called"
		<< std::endl;
}
ClapTrap ClapTrap::operator=(ClapTrap& ct){
	Name = ct.Name;
	Hit_points = ct.Hit_points;
	Energie_points = ct.Energie_points;
	Attack_damage = ct.Attack_damage;
	return *this;
}

void	ClapTrap::attack(const std::string& target){
	if (Hit_points == 0 || Energie_points == 0)
	{
		std::cout << "0 energie or hitpoints"
			<< std::endl;
		return ;
	}
	Hit_points -= 1;
	std::cout << "ClapTrap " + Name + " attacks " + target;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (Hit_points == 0 || Energie_points == 0)
	{
		std::cout << "0 energie or hitpoints"
			<< std::endl;
		return ;
	}
	Attack_damage += amount;
	std::cout << ", causing " << amount
		<< " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (Hit_points == 0 || Energie_points == 0)
	{
		std::cout << "0 energie or hitpoints"
			<< std::endl;
		return ;
	}
	Hit_points += amount;
	Energie_points -= 1;
	std::cout << "ClapTrap repaired, Hitpoints: "
		<< Hit_points << " Energie : "
		<< Energie_points << std::endl;
}

