#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    Name = "empty";
    Hit_points = 100;
	Energie_points = 50;
	Attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name):ClapTrap(Name){
	Hit_points = 100;
	Energie_points = 50;
	Attack_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& st){
    Name = st.Name;
    Hit_points = st.Hit_points;
    Energie_points = st.Energie_points;
    Attack_damage = st.Attack_damage;
    std::cout << "Scav copy constructor called" << std::endl;
}

ScavTrap ScavTrap::operator=(ScavTrap& st){
    Name = st.Name;
    Hit_points = st.Hit_points;
    Energie_points = st.Energie_points;
    Attack_damage = st.Attack_damage;
    std::cout << "Scav copy assignement op called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target){
    if (Hit_points == 0 || Energie_points == 0)
	{
		std::cout << "0 energie or hitpoints"
			<< std::endl;
		return ;
	}
	Hit_points -= 1;
	std::cout << "ScavTrap " + Name + " attacks " + target;
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}


/*
Name, which is passed as parameter to a constructor
• Hit points (100), represent the health of the ClapTrap
• Energy points (50)
• Attack damage (20)
*/