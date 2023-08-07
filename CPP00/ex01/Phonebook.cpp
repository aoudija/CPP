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

int		PhoneBook::get_num(){
	return (num);
}

void	printer(std::string str){
	for(int i = 0; i < (int)str.size(); i++){
		if (i == 9)
		{
			std::cout << '.';
			break ;
		}
		else
			std::cout << str[i];
	}
	if ((int)str.size() < 10)
	{
		int s = 10 - (int)str.size();
		for (int i = 0 ; i < s; i++)
			std::cout << ' ';
	}
}

void	columns()
{
	std::cout << "index     |";
	std::cout << "first_name|";
	std::cout << "last_name |";
	std::cout << "nick_name |\n";
	std::cout << "-------------------------------------------\n";
}
//getter
void	PhoneBook::show_phonebook(){
	columns();
	std::string line;
	int i;
	for (i = 0; i < this->num; i++) {
		std::cout << (i + 1) << "         |";
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
			int n = std::stoi(line);
			if (n <= 7 && n >=0)
			{
				if (n < i)
				{
					std::cout << (n + 1) << "         |";
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
		std::cout << std::setw(2) << "abrakadabra\n";
}
