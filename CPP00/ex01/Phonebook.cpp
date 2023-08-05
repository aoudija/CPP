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
	for (int i = 0; i < this->num; i++) {
		std::cout << (i + 1) << "         |";
		printer(this->c[i].gf_name()); std::cout << + "|";
		printer(this->c[i].gl_name()); std::cout << + "|";
		printer(this->c[i].gnick_name()); std::cout << + "|";
		std::cout << "\n";
   	}
}
