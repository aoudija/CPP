 #include "Form.hpp"

Form::Form():name("F"),gradeS(10),gradeE(20){
    is_signed = 0;
}

Form::Form(std::string n, int gs, int ge):name(n),gradeS(gs),gradeE(ge){
    is_signed = 0;
}

Form::~Form(){
}


const char * Form::GradeTooHighException::what() const _NOEXCEPT{
	return "grade Too High";
}

const char * Form::GradeTooLowException::what() const _NOEXCEPT{
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

void    Form::beSigned(const Bureaucrat& b){
    if (b.get_grade() > get_gradeS())
        throw GradeTooLowException();
    is_signed = 1;
}

Form::Form(const Form& fr):name(fr.name)
    ,gradeS(fr.gradeS),gradeE(fr.gradeE){
    is_signed = fr.is_signed;
}

const Form& Form::operator=(const Form& fr){
    is_signed = fr.is_signed;
    return *this;
}
