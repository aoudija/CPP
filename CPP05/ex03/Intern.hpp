#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"

class Intern{
    public:
        Intern();
        Intern(const Intern& In);
        const Intern& operator=(const Intern& In);
        ~Intern();
        Form*    makeForm(std::string FormName, std::string target);
        Form* shrub(std::string target);
        Form* pres(std::string target);
        Form* robot(std::string target);
};

#endif