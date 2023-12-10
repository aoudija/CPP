#include "BitcoinExchange.hpp"

using std::string;
using std::cout;
using std::endl;

BitcoinExchange::BitcoinExchange(){
    string buffer;
    float temp;
    std::ifstream file("data.csv");
    if (file.is_open()){
        std::getline(file, buffer);
        while (std::getline(file, buffer)){
            std::istringstream iss(buffer.substr(11));
	        iss >> temp;
            data[buffer.substr(0, 10)] = temp;
        }
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj){
    *this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj){
    data = obj.data;
    return *this;
}

BitcoinExchange::~BitcoinExchange(){
}

void BitcoinExchange::calculate(string date, float value){
    std::map<string, float>::iterator it;
    it = data.lower_bound(date);
    if (it->first != date && it->first != "2009-01-02")
		it--;
    cout << date + " => " << value << " = "
      << it->second * value << endl;
}

int is_all_number(string str){
	for(size_t i = 0;i < str.length();i++){
		if (isalpha(str[i]))
			return 0;
	}
	return 1;
}

int check_date(string date){
	if (date.length() != 10 || std::count(date.begin(), date.end(), '-') != 2
		|| (date[4] != '-' || date[7] != '-'))
		return 0;
	if (!is_all_number(date.substr(0, 4))
		|| !is_all_number(date.substr(5, 2))
		|| !is_all_number(date.substr(8, 2)))
		return 0;

	int month, day;
	std::istringstream iss(date.substr(5, 2));
	std::istringstream iss2(date.substr(8, 2));
	iss >> month;
	iss2 >> day;

	if (month < 0 || month > 12)
		return 0;
	if (day > 31 || day < 0)
		return 0;
	if (month == 2 && (day > 29 || day < 0))
		return 0;
	return 1;
}

int	check_value(string value){
	float num;
	std::istringstream iss(value);
	iss >> num;
	if (iss.fail()){
		cout << "Error: not a number." << endl;
		return 0;
	}
	if (num < 0){
		cout << "Error: too small a number." << endl;
		return 0;
	}
	else if (num > 1000){
		cout << "Error: too large number." << endl;
		return 0;
	}
	return num;
}
//Reminder: test pointer to getline buffer--> &buffer[0];
int parse_input(char* av, BitcoinExchange& BE){
	float num;
	std::map<string,int>::iterator it;
	std::string buffer;
	std::ifstream inputfile(av);
	if (inputfile.is_open()){
		std::getline(inputfile, buffer);
		if (buffer != "date | value"){
			cout << "Error: check header format" << endl;
			return 0;
		}
		while (std::getline(inputfile, buffer)){
			if (buffer.length() < 14
				|| buffer.find(" | ") != 10
				|| !check_date(buffer.substr(0, 10)))
				cout << "Error: bad input => " << buffer << endl;
			else if (check_value(buffer.substr(13))){
				std::istringstream iss(buffer.substr(13, 1));
				iss >> num;
				BE.calculate(buffer.substr(0, 10), num);
			}
		}
		inputfile.close();
	}
	else
		return 0;
	return 1;
}
/*
	$> head input.txt
	date | value
	2011-01-03 | 3
	2011-01-03 | 2
	2011-01-03 | 1
	2011-01-03 | 1.2
	2011-01-09 | 1
	2012-01-11 | -1
	2001-42-42
	2012-01-11 | 1
	2012-01-11 | 2147483648
	$>
*/
