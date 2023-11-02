#include "FragTrap.hpp"

FragTrap::FragTrap(){
    Name = "empty";
    Hit_points = 100;
	Energie_points = 100;
	Attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name):ClapTrap(Name){
	Hit_points = 100;
	Energie_points = 100;
	Attack_damage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& st){
    Name = st.Name;
    Hit_points = st.Hit_points;
    Energie_points = st.Energie_points;
    Attack_damage = st.Attack_damage;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap FragTrap::operator=(FragTrap& st){
    Name = st.Name;
    Hit_points = st.Hit_points;
    Energie_points = st.Energie_points;
    Attack_damage = st.Attack_damage;
    std::cout << "FragTrap copy assignement op called" << std::endl;
	return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor called" << std::endl;
}

void    FragTrap::attack(const std::string& target){
    if (Hit_points == 0 || Energie_points == 0)
	{
		std::cout << "0 energie or hitpoints"
			<< std::endl;
		return ;
	}
	Hit_points -= 1;
	std::cout << "FragTrap " + Name + " attacks " + target;
}

void    FragTrap::highFivesGuys(){
    std::cout << "HIGH FIVE GUYS!!" << std::endl;
}


/*
Name, which is passed as parameter to a constructor
• Hit points (100), represent the health of the ClapTrap
• Energy points (50)
• Attack damage (20)
*/