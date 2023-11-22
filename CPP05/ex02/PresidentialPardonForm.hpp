#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "RobotomyRequestForm.hpp"

class PresidentialPardonForm:public AForm{
    std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string tr);
        PresidentialPardonForm(const PresidentialPardonForm& sh);
        const PresidentialPardonForm& operator=(const PresidentialPardonForm& sh);
        ~PresidentialPardonForm();
        void	execute(Bureaucrat const & executor) const;
};

#endif