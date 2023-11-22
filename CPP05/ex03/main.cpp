#include "Intern.hpp"

int main(){
    try{
        Bureaucrat B("Amine", 1);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("shruberry", "Bender");
        B.signForm(*rrf);
        B.executeForm(*rrf);
        delete rrf;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
        std::cout << "form not executed" << std::endl;
    }
    std::cout << "hello\n";
//     Intern someRandomIntern;
// Form* rrf;
// rrf = someRandomIntern.makeForm("shruberry", "Bender");
}
