#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat B("Amine", 150);
        Form F("Form10", 100, 100);
        std::cout << F << std::endl;
        B.signForm(F);
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}
