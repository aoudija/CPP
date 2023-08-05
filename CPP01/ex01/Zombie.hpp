#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie{
	std::string		name;
	public:
		// Zombie();
		void		set_name(std::string name);
		std::string	get_name(void);
		void		announce(void);
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif
