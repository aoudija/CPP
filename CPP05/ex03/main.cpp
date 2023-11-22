#include "Intern.hpp"

int main(){
    try{
        Bureaucrat B("Amine", 1);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        B.signForm(*rrf);
        B.executeForm(*rrf);
        delete rrf;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
//     Intern someRandomIntern;
// Form* rrf;
// rrf = someRandomIntern.makeForm("shruberry", "Bender");
}
