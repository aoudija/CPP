#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	Contact	c[8];
	int		num;
	public:
		void	set_phonebook(Contact ct[8]);
		void	show_phonebook();
		void	set_num(int n);
		int		get_num();
};

#endif
