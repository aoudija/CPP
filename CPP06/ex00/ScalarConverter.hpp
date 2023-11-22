#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iomanip>
#include <iostream>
#include <string>

class ScalarConverter{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter& sc);
        const ScalarConverter operator=(const ScalarConverter& sc);
    public:
        static void convert(std::string l);
        ~ScalarConverter();
};

#endif