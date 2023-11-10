#include "Character.hpp"

Character::Character(){
	Name = "notyet";
	for (int i = 0;i < 4;i++){
		inventory[i] = NULL;
	}
}

Character::Character(std::string name){
	Name = name;
	for (int i = 0;i < 4;i++){
		inventory[i] = NULL;
	}
}

Character::Character(const Character& ch){
	*this = ch;
}

const Character&	Character::operator=(const Character& ch){
	Name = ch.Name;
	for (int i = 0;i < 4;i++){
		if (ch.inventory[i]){
			if (inventory[i]){
				delete inventory[i];
				inventory[i] = ch.inventory[i]->clone();
			}
			else
				inventory[i] = ch.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character(){
	// std::cout << "character destructor\n";
	for (int i = 0;i < 4;i++){
		if (inventory[i])
			delete inventory[i];
	}
	// remove();
}

std::string const & Character::getName() const{
	return Name;
}

void Character::equip(AMateria* m){
	for (int i = 0;i < 4;i++){
		if (!inventory[i] && m){
			inventory[i] = m->clone();
			return ;
		}
	}
}

void Character::unequip(int idx){
	// for (int i = 0;i < 4;i++){
		// if (i == idx && inventory[i]){
		if (idx < 4 && idx >= 0){
			inventory[idx] = NULL;
			return ;
		}
		// }
	// }
}

void Character::use(int idx, ICharacter& target){
	for (int i = 0;i < 4;i++){
		if (i == idx && inventory[i]){
			inventory[i]->AMateria::use(target);
		}
	}
}
