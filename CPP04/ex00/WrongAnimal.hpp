#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal& an);
		~WrongAnimal();
		const WrongAnimal& operator=(WrongAnimal& an);
		std::string getType() const ;
		void	makeSound() const ;
};

#endif