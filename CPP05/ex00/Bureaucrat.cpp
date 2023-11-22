#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	name = "";
	grade = 100;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat::Bureaucrat(const Bureaucrat& bt){
	*this = bt;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bt){
	name = bt.name;
	grade = bt.grade;
	return *this;
}

std::string Bureaucrat::get_name() const{
	return name;
}
int		Bureaucrat::get_grade() const{
	return grade;
}

const char * Bureaucrat::GradeTooHighException::what() const _NOEXCEPT{
	return "grade Too High";
}

const char * Bureaucrat::GradeTooLowException::what() const _NOEXCEPT{
	return "grade Too Low";
}

Bureaucrat::Bureaucrat(std::string Name, int Grade):name(Name){
    if (Grade < 1)
		throw GradeTooHighException();
	else if (Grade > 150)
		throw GradeTooLowException();
	grade = Grade;
}

void	Bureaucrat::increment(){
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

void	Bureaucrat::decrement(){
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bt){
	os << bt.get_name() << ", bureaucrat grade " <<bt.get_grade() << '.';
	return os;
}
//<name>, bureaucrat grade <grade>.