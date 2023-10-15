#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>

int	all_alpha(std::string str)
{
	if (str.empty())
		return (0);
	for (int i = 0; i < (int)str.size(); i++)
	{
		if (!isalpha(str[i]))
			return (0);
	}
	return (1);
}

int	all_digits(std::string str)
{
	if (str.empty())
		return (0);
	for (int i = 0; i < (int)str.size(); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

void	opt_names(std::string line){
	while (1)
	{
		std::cout << "try again: ";
		std::getline(std::cin,line);
		if (std::cin.eof())
			break ;
		if (all_alpha(line))
			break ;
	}
}

void	opt_nck_secret(std::string line){
	while (1)
	{
		std::cout << "try again: ";
		std::getline(std::cin,line);
		if (std::cin.eof())
			break ;
		if (!line.empty() && isalnum(line[0]))
			break ;
	}
}

void	ADD(Contact *c, std::string line)
{
	//first_n
	std::cout << "first_name: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(0) ;
	if (!all_alpha(line))
	{
		std::cout << "only alphabets, \n";
		opt_names(line);
	}
	c->sf_name(line);
	
	//last_n

	std::cout << "last_name: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(0) ;
	if (!all_alpha(line))
	{
		std::cout << "only alphabets, \n";
		opt_names(line);
	}
	c->sl_name(line);

	//nick_n
	
	std::cout << "nick_name: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(0) ;
	if (line.empty() || !isalnum(line[0]))
	{
		std::cout << "enter numbers/alphabets\n";
		opt_nck_secret(line);
	}
	c->snick_name(line);
	
	//phone_num

	std::cout << "Phone_number: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(0) ;
	if (!all_digits(line))
	{
		std::cout << "write digits, ";
		while (1){
			std::cout << "try again: ";
			std::getline(std::cin,line);
			if (std::cin.eof())
				break ;
			if (all_digits(line))
				break ;
		}
	}
	c->sphonenum(line);
	//secret
	std::cout << "your darkest secret is?: ";
	std::getline(std::cin, line);
	if (line.empty() || !isalnum(line[0]))
	{
		std::cout << "enter numbers/alphabets\n";
		opt_nck_secret(line);
	}
	c->ssecret(line);
}

int main(int ac, char **av)
{
	PhoneBook	PB;
	Contact		c[8];
	std::string	line;
	int			i = 0;
	int			e = 0;

	if (ac == 1 && !av[1])
	{
		while (1){
			std::cout << "enter cmd: ";
			std::getline(std::cin,line);
			if (std::cin.eof())
				break ;
			if (line == "ADD")
			{
				if (i == 8)
				{
					PB.set_num(8);
					e = 1;
					i = 0;
				}
				ADD(&c[i], line);
				i++;
				if (!e)
					PB.set_num(i);
				PB.set_phonebook(c);
			}
			else if (line == "SEARCH")
			{
				if (PB.get_num() == 0)
					std::cout << "book empty\n";
				else
					PB.show_phonebook();
			}
			if (line == "EXIT")
				break ;
		}
	}
	else
		std::cout << "Error!\n";
}
