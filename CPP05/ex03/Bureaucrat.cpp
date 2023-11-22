#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("empty"){
	grade = 100;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat::Bureaucrat(const Bureaucrat& bt):name(bt.name){
	grade = bt.grade;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bt){
	grade = bt.grade;
	return *this;
}

std::string Bureaucrat::get_name() const{
	if (name.empty())
		return "";
	return name;
}
int		Bureaucrat::get_grade() const{
	return grade;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
	return "grade Too High";
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
	return "grade Too Low";
}

Bureaucrat::Bureaucrat(std::string Name, int Grade):name(Name){
    if (Grade < 1)
		throw GradeTooHighException();
	else if (Grade > 150)
		throw GradeTooLowException();
	std::cout << "hey\n";
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

void	Bureaucrat::signForm(Form& f){
	f.beSigned(*this);
	if (f.get_sign() == 1)
		std::cout << name << " signed " << f.get_formname() << std::endl;
	else if (f.get_sign() == 0)
		std::cout << name << " couldn't sign " << f.get_formname()
			<< " because grade too low" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bt){
	os << bt.get_name() << ", bureaucrat grade " <<bt.get_grade() << '.';
	return os;
}
//<name>, bureaucrat grade <grade>.

const char * Bureaucrat::FormNotSignedExecption::what() const throw(){
	return "Form is not signed yet";
};

void	Bureaucrat::executeForm(Form const & form){
	if (get_grade() > form.get_gradeE()){
		std::cout << "form not executed" << std::endl;
        throw GradeTooLowException();
	}
    else if (!form.get_sign()){
		std::cout << "form not executed" << std::endl;
        throw FormNotSignedExecption();
	}
	form.execute(*this);
}

