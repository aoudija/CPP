#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery",145, 137),target(""){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tr):AForm("Shrubbery",145, 137),target(tr){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& sh){
    *this = sh;
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& sh){
    (void)sh;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    std::ofstream file(target+"__shrubbery");

    file <<"         # #### ####" << std::endl;
    file <<"       ### ###|### |/####"<< std::endl;
    file <<"      ##  #/  ||/##/_/##/_#"<< std::endl;
    file <<"    ###    ###|/ // # ###"<< std::endl;
    file <<"  ##___###_## | #/###_/_####"<< std::endl;
    file <<" ## #### #   #| /  #### ##/##"<< std::endl;
    file <<"  __#_--###`  |{,###---###-~"<< std::endl;
    file <<"            {} }{"<< std::endl;
    file <<"             }}{"<< std::endl;
    file <<"             }}{"<< std::endl;
    file <<"             {{}"<< std::endl;
    file <<"       , -=-~{ .-^- _"<< std::endl;
    file <<"             `}"<< std::endl;
    file <<"              {"<< std::endl;
    
    file.close();
    std::cout << executor.get_name() << " executed " << get_formname()
		<< std::endl;
}
