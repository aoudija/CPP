#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice:public AMateria
{
    public:
		Ice();
		Ice(const Ice& ic);
		~Ice();
		const Ice& operator=(const Ice& ic);
		AMateria* clone() const;
		void	use(ICharacter& target);
};

#endif