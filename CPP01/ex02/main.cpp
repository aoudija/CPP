#include <iostream>

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string* strPTR = &str;
    std::string& strREF = str;

    std::cout << &str << '\n';
    std::cout << strPTR << '\n';
    std::cout << &strREF << '\n';

    std::cout << str << '\n';
    std::cout << *strPTR << '\n';
    std::cout << strREF << '\n';
}
