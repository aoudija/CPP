#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public virtual ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(ScavTrap& st);
		ScavTrap operator=(ScavTrap& st);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
};

#endif