#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money.You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!";
}

void	Harl::warning(void){
	std:: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now.";
}

void	Harl::complain(std::string level){
	std::string tab[] = {"debug", "info", "warning", "error"};
	int i;
	for (i = 0;i < 4;i++){
		if (tab[i] == level){
			break ;
		}
	}
	void	(Harl::*pf[])() = {&Harl::debug, &Harl::info, &Harl::warning
		, &Harl::error};
	(this->*pf[i])();
}

