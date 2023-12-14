#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <map>

using std::map;
using std::string;

class BitcoinExchange {
    //
    map<string,float> data;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        void calculate(string date, float value);
};

int parse_input(char* av, BitcoinExchange& BE);

#endif // BITCOINEXCHANGE_HPP
