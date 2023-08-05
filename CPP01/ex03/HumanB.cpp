#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
}

void	HumanB::setWeapon(Weapon &w){
    this->w = &w;
}

std::string HumanB::get_name(){
    return (name);
}

void    HumanB::attack(){
    std::cout << get_name() << " attack with their "
        << this->w->getType() << '\n';
}