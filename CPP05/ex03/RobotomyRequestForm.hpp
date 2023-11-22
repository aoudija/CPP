#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "ShrubberyCreationForm.hpp"

class RobotomyRequestForm:public Form{
    std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string tr);
        RobotomyRequestForm(const RobotomyRequestForm& sh);
        const RobotomyRequestForm& operator=(const RobotomyRequestForm& sh);
        ~RobotomyRequestForm();
        void	execute(Bureaucrat const & executor) const;
};

#endif