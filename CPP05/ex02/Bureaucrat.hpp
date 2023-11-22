#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"

class AForm;

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
		class FormNotSignedExecption:public std::exception{
			const char* what() const throw();
		};
		void	increment();
		void	decrement();
		void	signForm(AForm& f);
		void	executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bt);

#endif