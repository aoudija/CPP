#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	const std::string name;
	bool is_signed;
	const int gradeS;
	const int gradeE;
	public:
		AForm();
		AForm(const AForm& fr);
		const AForm& operator=(const AForm& fr);
		virtual ~AForm();
		AForm(std::string n, int gs, int ge);
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
		void	beSigned(const Bureaucrat& b);
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, AForm& bt);

#endif