#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    try{
        Bureaucrat b = Bureaucrat("Amine", 40);
        // AForm* f = new RobotomyRequestForm("FORMrobot");
        AForm* f = new ShrubberyCreationForm("home");
        // AForm* f = new PresidentialPardonForm("pardon");
        b.signForm(*f);
        b.executeForm(*f);
        delete f;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}
