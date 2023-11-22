#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("Shrubbery",145, 137),target(""){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tr):Form("Shrubbery",145, 137),target(tr){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& sh){
    *this = sh;
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& sh){
    target = sh.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    std::ofstream file(target+"__shrubbery");

    file << "                     .o00o" << std::endl;
    file << "                   o000000oo" << std::endl;
    file << "                  00000000000o" << std::endl;
    file << "                 00000000000000" << std::endl;
    file << "              oooooo  00000000  o88o" << std::endl;
    file << "           ooOOOOOOOoo  ```''  888888" << std::endl;
    file << "         OOOOOOOOOOOO'.qQQQQq. `8888'" << std::endl;
    file << "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'" << std::endl;
    file << "        OOOOOOOOOO'.QQQQQQQQQQ/ /q" << std::endl;
    file << "         OOOOOOOOO QQQQQQQQQQ/ /QQ" << std::endl;
    file << "           OOOOOOOOO `QQQQQQ/ /QQ'" << std::endl;
    file << "             OO:F_P:O `QQQ/  /Q'" << std::endl;
    file << "                \\. \\ |  // |" << std::endl;
    file << "                d\\ \\\\\\|_////" << std::endl;
    file << "                qP| \\\\ _' `|Ob" << std::endl;
    file << "                   \\  / \\  \\Op" << std::endl;
    file << "                   |  | O| |" << std::endl;
    file << "           _       //. \\_/ /\\" << std::endl;
    file << "            `---__/|_\\\\   //|  __" << std::endl;
    file << "                  `-'  `-'`-'-'" << std::endl;
    
    file.close();
    std::cout << executor.get_name() << " executed " << get_formname()
		<< std::endl;
}
