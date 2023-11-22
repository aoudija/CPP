#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    try{
    Bureaucrat B("Amine", 100);
    ShrubberyCreationForm f("shrubery");
    RobotomyRequestForm R(  "robo");


    B.signForm(R);
    // B.executeForm(R);
        B.signForm(f);
        B.executeForm(f);
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
        std::cout << "form not executed" << std::endl;
    }
}
