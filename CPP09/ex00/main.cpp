#include "BitcoinExchange.hpp"

using std::cout;
using std::endl;
using std::string;

int	main(int ac, char** av){
	if (ac == 2){
	    BitcoinExchange BE;
	    parse_input(av[1], BE);
    }
}
