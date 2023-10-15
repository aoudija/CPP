#include "Phonebook.hpp"

//setter
void	PhoneBook::set_phonebook(Contact ct[8]){
	for (int i = 0; i < this->num; i++) {
    	this->c[i] = ct[i];
   	}
}

void	PhoneBook::set_num(int n){
	this->num = n;
}

//getter
int		PhoneBook::get_num(){
	return (num);
}

void	printer(std::string str){
	if (str.length() >= 10){
		std::cout << str.substr(0,9) + '.';
	}
	else {
		std::cout << str;
		if ((int)str.size() < 10)
		{
			int s = 10 - (int)str.size();
			for (int i = 0 ; i < s; i++)
				std::cout << ' ';
		}
	}
}

void	columns()
{
	std::cout << std::left << std::setw(10) << "index" << '|';
	std::cout << std::left << std::setw(10) << "first_name" << '|';
	std::cout << std::left << std::setw(10) << "last_name" << '|';
	std::cout << std::left << std::setw(10) << "nick_name" << "|\n";
	std::cout << std::left << std::setw(10) << "--------------------------------------------\n";
}
void	PhoneBook::show_phonebook(){
	columns();
	std::string line;
	int i;
	for (i = 0; i < this->num; i++) {
		std::cout << i << "         |";
		printer(this->c[i].gf_name()); std::cout << + "|";
		printer(this->c[i].gl_name()); std::cout << + "|";
		printer(this->c[i].gnick_name()); std::cout << + "|";
		std::cout << "\n";
   	}
	while (1){
		std::cout << "enter index : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if (line.length() != 1 || !isdigit(line[0])){
			std::cout << "wrong index\n";}
		else{
			int n = std::atoi(line.c_str());
			if (n <= 7 && n >=0)
			{
				if (n < i)
				{
					std::cout << n << "         |";
					printer(this->c[n].gf_name()); std::cout << + "|";
					printer(this->c[n].gl_name()); std::cout << + "|";
					printer(this->c[n].gnick_name()); std::cout << + "|";
					std::cout << "\n";
					break ;
				}
				else
					std::cout << "error occured!\n";break ;
			}
			else
				std::cout << "not in range , try (0 -> 7)\n";
		}
	}
}
