#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat{
    const std::string name;
    int			grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& bt);
		const Bureaucrat& operator=(const Bureaucrat& bt);
		~Bureaucrat();
		std::string get_name() const;
		int			get_grade() const;
		Bureaucrat(std::string Name, int Grade);
		class GradeTooHighException:public std::exception{
			const char* what() const throw();
		};
		class GradeTooLowException:public std::exception{
			const char* what() const throw();
		};
		void	increment();
		void	decrement();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bt);

#endif