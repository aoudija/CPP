#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm:public AForm{
    std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string tr);
        ShrubberyCreationForm(const ShrubberyCreationForm& sh);
        const ShrubberyCreationForm& operator=(const ShrubberyCreationForm& sh);
        ~ShrubberyCreationForm();
        void	execute(Bureaucrat const & executor) const;
};

#endif
