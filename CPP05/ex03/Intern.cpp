#include "Intern.hpp"

Intern::Intern(){
}

Intern::Intern(const Intern& In){
    (void)In;
}

const Intern& Intern::operator=(const Intern& In){
    (void)In;
    return *this;
}

Intern::~Intern(){
}

Form* Intern::shrub(std::string target){
    return new ShrubberyCreationForm(target);
}

Form* Intern::pres(std::string target){
    return new PresidentialPardonForm(target);
}

Form* Intern::robot(std::string target){
    return new RobotomyRequestForm(target);
}

Form*    Intern::makeForm(std::string FormName, std::string target){
    //"robotomy request"
    std::string tab[] = {"shruberry", "presidential pardon", "robotomy request"};
    Form* (Intern::*F[])(std::string) = {&Intern::shrub, &Intern::pres, &Intern::robot};
    for (int i = 0; i < 3;i++){
        if (tab[i] == FormName)
            return (this->*F[i])(target);
    }
    return NULL;
}
