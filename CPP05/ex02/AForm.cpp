 #include "AForm.hpp"

AForm::AForm():name("F"),gradeS(10),gradeE(20){
    is_signed = 0;
}

AForm::AForm(std::string n, int gs, int ge):name(n),gradeS(gs),gradeE(ge){
    is_signed = 0;
}

AForm::~AForm(){
}


const char * AForm::GradeTooHighException::what() const throw(){
	return "grade Too High";
}

const char * AForm::GradeTooLowException::what() const throw(){
	return "grade Too Low";
}

std::string	AForm::get_formname() const{
    if (name.empty())
        return "";
    return name;
}

bool	AForm::get_sign() const{
    return is_signed;
}

int		AForm::get_gradeS() const{
    return gradeS;
}

int		AForm::get_gradeE() const{
    return gradeE;
}

std::ostream& operator<<(std::ostream& os, AForm& F){
	os << "name: " << F.get_formname() << ", signed: " << F.get_sign()
        << ", grade required to sign it: " << F.get_gradeS()
        << ", grade required to execute it: " << F.get_gradeE();
	return os;
}

void    AForm::beSigned(const Bureaucrat& b){
    if (b.get_grade() > get_gradeS())
        throw GradeTooLowException();
    is_signed = 1;
}

AForm::AForm(const AForm& fr):name(fr.name)
    ,gradeS(fr.gradeS),gradeE(fr.gradeE){
    is_signed = fr.is_signed;
}

const AForm& AForm::operator=(const AForm& fr){
    is_signed = fr.is_signed;
    return *this;
}
