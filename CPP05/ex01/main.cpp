#include "Bureaucrat.hpp"

int main(){
    Bureaucrat B("Amine", 9);
    Form F("Form10", 10, 20);
    try{
        F.beSigned(B);
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
        B.signForm(F);
}
