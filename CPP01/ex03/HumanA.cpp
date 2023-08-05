#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w):w(w){
    this->name = name;
}

std::string HumanA::get_name(){
    return (name);
}

void    HumanA::attack(){
    std::cout << get_name() << " attack with their "
        << this->w.getType() << '\n';
}

