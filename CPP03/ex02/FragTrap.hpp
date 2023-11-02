#include "ClapTrap.hpp"

class FragTrap:public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(FragTrap& st);
		FragTrap operator=(FragTrap& st);
		~FragTrap();
		void	attack(const std::string& target);
		void	highFivesGuys();
};

