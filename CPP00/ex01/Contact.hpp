#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	std::string first_name, last_name,
		nickname, phone_number, darkest_secret;
	public:
		void sf_name(std::string first_name), sl_name(std::string last_name), 
			snick_name(std::string nickname), sphonenum(std::string phone_number), 
			ssecret(std::string darkest_secret);
		std::string gf_name(), gl_name(),
			gnick_name(), gphonenum(), gsecret();
};

#endif