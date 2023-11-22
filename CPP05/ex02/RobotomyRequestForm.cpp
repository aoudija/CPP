#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm():AForm( "Robot",72, 45), target(""){
}

RobotomyRequestForm::RobotomyRequestForm(std::string tr):AForm( "Robot",72, 45), target(tr){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& sh){
    *this = sh;
}

const RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& sh){
    target = sh.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    int r;
    std::srand(std::time(0));
    r = std::rand() % 2;
    if (!r){
        std::cout << "~ drilling sound ~" << std::endl;
        std::cout << target <<" has been robotomized successfully" << std::endl;
        std::cout << executor.get_name() << " executed " << get_formname()
		<< std::endl;
    }
    else
        std::cout << "error: the robotomy failed" << std::endl;
}

