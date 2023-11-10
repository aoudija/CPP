#ifndef CURE_HPP
#define CURE_HPP

#include "Ice.hpp"

class Cure:public AMateria
{
    public:
		Cure();
		Cure(const Cure& c);
		~Cure();
		const Cure& operator=(const Cure& c);
		AMateria* clone() const;
		void	use(ICharacter& target);
};

#endif