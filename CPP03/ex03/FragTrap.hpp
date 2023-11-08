#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap:public virtual ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(FragTrap& st);
		FragTrap operator=(FragTrap& st);
		~FragTrap();
		void	attack(const std::string& target);
		void	highFivesGuys();
};

#endif