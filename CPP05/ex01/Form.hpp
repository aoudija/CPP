#ifndef FORM_HPP
#define FORM_HPP


#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	const std::string name;
	bool is_signed;
	const int gradeE;
	const int gradeS;
	public:
		Form();
		Form(std::string n, int gs, int ge);
		Form(const Form& fr);
		const Form& operator=(const Form& fr);
		~Form();
		class GradeTooHighException:public std::exception{
			const char* what() const throw();
		};
		class GradeTooLowException:public std::exception{
			const char* what() const throw();
		};
		std::string	get_formname() const;
		bool	get_sign() const;
		int		get_gradeS() const;
		int		get_gradeE() const;
		void	beSigned(Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, Form& bt);

#endif