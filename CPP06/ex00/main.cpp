#include "ScalarConverter.hpp"

int main(int ac, char** av){
    if (ac != 2)
        return 0;
    // ScalarConverter::convert(av[1]);
    // (void)av;
    // (void)ac;
    // char c = static_cast<float>('a');
    int j = 10;
    int d = static_cast<char>(j);
    std::cout << d << std::endl;
    float f = atof(av[1]);
    std::cout << std::fixed <<std::setprecision(2) << f << "\n";
}
