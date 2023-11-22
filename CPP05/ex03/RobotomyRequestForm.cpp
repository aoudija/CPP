#include "RobotomyRequestForm.hpp"
#include <cstdlib>
// #include <ctime>

RobotomyRequestForm::RobotomyRequestForm():Form( "Robot",72, 45), target(""){
}

RobotomyRequestForm::RobotomyRequestForm(std::string tr):Form( "Robot",72, 45), target(tr){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& sh){
    *this = sh;
}

const RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& sh){
    (void)sh;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    int i;
    i = std::rand() % 2;
    std::cout << "~ drilling sound ~" << std::endl;
    if (!i)
        std::cout << target <<" has been robotomized successfully" << std::endl;
    else
        std::cout << "the robotomy failed" << std::endl;
    std::cout << executor.get_name() << " executed " << get_formname()
		<< std::endl;
}

