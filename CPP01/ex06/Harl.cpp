#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void	Harl::info(void){
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void	Harl::warning(void){
	std::cout << "[ WARNING ]\n";
	std:: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void	Harl::error(void){
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void	Harl::complain(std::string level){
	std::string strtab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*table[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	while (i < 4){
		if (level == strtab[i])
			break ;
		i++;}
	switch (i)
	{
		case 0:
			(this->*table[0])();
		case 1:
			(this->*table[1])();
		case 2:
			(this->*table[2])();
		case 3:
			(this->*table[3])();
	}
}

