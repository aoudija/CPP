#include "FragTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap{
	std::string Name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap& dt);
		DiamondTrap operator=(DiamondTrap& dt);
		void attack(const std::string& target);
		void	whoAmI();
};

