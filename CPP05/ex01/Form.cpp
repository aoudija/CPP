 #include "Form.hpp"

Form::Form():name("F"),gradeE(20),gradeS(10){
    is_signed = 0;
}

Form::Form(std::string n, int gs, int ge):name(n),gradeE(ge),gradeS(gs){
    is_signed = 0;
}

Form::~Form(){
}


const char * Form::GradeTooHighException::what() const throw(){
	return "grade Too High";
}

const char * Form::GradeTooLowException::what() const throw(){
	return "grade Too Low";
}

std::string	Form::get_formname() const{
    if (name.empty())
        return "";
    return name;
}

bool	Form::get_sign() const{
    return is_signed;
}

int		Form::get_gradeS() const{
    return gradeS;
}

int		Form::get_gradeE() const{
    return gradeE;
}

std::ostream& operator<<(std::ostream& os, Form& F){
	os << "name: " << F.get_formname() << ", signed: " << F.get_sign()
        << ", grade required to sign it: " << F.get_gradeS()
        << ", grade required to execute it: " << F.get_gradeE();
	return os;
}

void    Form::beSigned(Bureaucrat& b){
    if (b.get_grade() > get_gradeS())
        throw GradeTooLowException();
    is_signed = 1;
}

Form::Form(const Form& fr):name(fr.name), gradeE(fr.gradeE), gradeS(fr.gradeS){
    is_signed = fr.is_signed;
}

const Form& Form::operator=(const Form& fr){
    is_signed = fr.is_signed;
    return *this;
}       