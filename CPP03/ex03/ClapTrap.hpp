#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
	protected:
    	std::string Name;
		int	Hit_points, Energie_points, Attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap& ct);
		~ClapTrap();
		ClapTrap operator=(ClapTrap& ct);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
/*
Default constructor
• Copy constructor
• Copy assignment operator
• Destructor
*/
