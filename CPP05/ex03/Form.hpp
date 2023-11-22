#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	const std::string name;
	bool is_signed;
	const int gradeS;
	const int gradeE;
	public:
		Form();
		Form(std::string n, int gs, int ge);
		Form(const Form& fr);
		const Form& operator=(const Form& fr);
		virtual ~Form();
		class GradeTooHighException:public std::exception{
			const char* what() const _NOEXCEPT;
		};
		class GradeTooLowException:public std::exception{
			const char* what() const _NOEXCEPT;
		};
		std::string	get_formname() const;
		bool	get_sign() const;
		int		get_gradeS() const;
		int		get_gradeE() const;
		void	beSigned(const Bureaucrat& b);
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, Form& bt);

#endif