#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

class MateriaSource : public IMateriaSource{
	AMateria* am[4];
    public:
		MateriaSource();
		MateriaSource(const MateriaSource& mts);
		const MateriaSource& operator=(const MateriaSource& mts);
		~MateriaSource();
		void learnMateria(AMateria* a);
		AMateria* createMateria(std::string const & type);
};
