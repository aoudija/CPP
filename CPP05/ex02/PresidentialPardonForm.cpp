#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm( "presidential",25, 5),target(""){
}

PresidentialPardonForm::PresidentialPardonForm(std::string tr):AForm( "presidential",25, 5),target(tr){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& sh){
    *this = sh;
}

const PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& sh){
    (void)sh;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    std::cout << executor.get_name() << " executed " << get_formname()
		<< std::endl;
}
