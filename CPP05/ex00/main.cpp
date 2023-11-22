#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat B("Amine", 1);
        std::cout << B << std::endl;
        B.increment();
        std::cout << B << std::endl;
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
}
