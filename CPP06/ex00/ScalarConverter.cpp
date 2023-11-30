#include "ScalarConverter.hpp"
#include <cstdlib>

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter(ScalarConverter& sc){
	*this = sc;
}

const ScalarConverter ScalarConverter::operator=(const ScalarConverter& sc){
	(void)sc;
	return *this;
}

ScalarConverter::~ScalarConverter(){
}

// int	print(std::string )

int	count_char(std::string l, char c){
	int count = 0;
	for (size_t i = 0; i < l.length(); i++){
		if (l[i] == c)
			count++;
	}
	return count;
}

bool	is_all_number(std::string l){
	// std::cout << "|" << l[l.length() - 1] << "|";
	for (size_t i = 0; i < l.length(); i++){
		if (!isnumber(l[i]))
			return 0;
	}
	return 1;
}

int	type_checker(std::string l){
	size_t	len = l.length();
	size_t	fpidx = l.find('.');
	if (l.length() == 1 && !isnumber(l[0]))			        		//'c'
		return 1;
	else if (count_char(l, '.') == 1								//negative double
		&& count_char(l, '-') == 1 && l[0] == '-'
		&& is_all_number(l.substr(1, fpidx - 1))
		&& is_all_number(l.substr(fpidx + 1, len - fpidx - 1)))
		return 22;
	else if (count_char(l, '.') == 1							    //double
		&& is_all_number(l.substr(0, fpidx))
		&& is_all_number(l.substr(fpidx + 1, len - fpidx - 1)))
		return 2;
	else if (count_char(l, '.') == 1 && count_char(l, 'f') == 1     //negative float
		&& l[0] == '-' && count_char(l, '-') == 1
		&& l[l.length() - 1] == 'f'
		&& is_all_number(l.substr(1, fpidx - 1))
		&& is_all_number(l.substr(fpidx + 1, len - fpidx - 2)))
		return 33;
	else if (count_char(l, '.') == 1 && count_char(l, 'f') == 1     //float
		&& l[l.length() - 1] == 'f'
		&& is_all_number(l.substr(0, fpidx))
		&& is_all_number(l.substr(fpidx + 1, len - fpidx - 2)))
		return 3;
	else if (count_char(l, '-') == 1 && l[0] == '-'
		&& is_all_number(l.substr(1, l.length() - 1)))				//negative integer
		return 44;
	else if (is_all_number(l))										//integer
		return 4;
	else
		return 55;
	return 0;
}

char	char_check(std::string l){
	int		type = type_checker(l);
	char	c = '\0';
	size_t	fpidx = l.find('.');

	switch (type){
		case 1:
			return l[0];
		case 2:
			return static_cast<char>(atoi((l.substr(0, fpidx)).c_str()));
		case 3:
			c = static_cast<char>(atoi((l.substr(0, fpidx)).c_str()));
		case 4:
			return static_cast<char>(atoi(l.c_str()));
	}
	return c;
}

int		int_check(std::string l){
	int type = type_checker(l);

	if (type == 1)
		return static_cast<int>(l[0]);
	return atoi(l.c_str());
}

double	double_check(std::string l){
	int type = type_checker(l);

	if (type == 1)
		return static_cast<double>(l[0]);
	return atof(l.c_str());
}

float	float_check(std::string l){
	int type = type_checker(l);

	if (type == 1)
		return static_cast<float>(l[0]);
	return static_cast<float>(atof(l.c_str()));
}

void	for_fun_n_science(std::string l){
	if (l == "-inff" || l == "-inf"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;exit(0);
	}
	if (l == "+inff" || l == "+inf"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;exit(0);
	}
	if (l == "nanf" || l == "nan"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;exit(0);
	}
}

void	check_limits(std::string l){
	if (atof(l.c_str()) < INT_MIN){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1)
			<< static_cast<float>(atof(l.c_str())) << 'f'<< std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1)
			<< atof(l.c_str()) << std::endl;exit(0);
	}
	if (atof(l.c_str()) > INT_MAX){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1)
			<< static_cast<float>(atof(l.c_str())) << 'f'<< std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1)
			<< atof(l.c_str()) << std::endl;exit(0);
	}
}

void ScalarConverter::convert(std::string l){
	char c = char_check(l);
	int type = type_checker(l);

	check_limits(l);
	for_fun_n_science(l);
	if (type == 55)
		{std::cout << "error\n";return ;}
	if (!isprint(c))
		std::cout << "char: Non diplayable"<< std::endl;
	else
		std::cout << "char: '" << char_check(l) << "'" << std::endl;
	std::cout << "int: " << int_check(l) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << float_check(l) << 'f' << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << double_check(l) << std::endl;
}
