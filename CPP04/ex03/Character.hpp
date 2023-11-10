#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
	std::string Name;
	AMateria* inventory[4];
	// AMateria* rm[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character& ch);
		const Character& operator=(const Character& ch);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
