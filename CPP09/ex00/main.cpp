#include "BitcoinExchange.hpp"

using std::cout;
using std::endl;
using std::string;

int	main(int ac, char** av){ 
	if (ac != 2 || strcmp(av[1], "input.txt"))
		cout << "Error: could not open file." << endl;
	BitcoinExchange BE;
	parse_input(av[1], BE);
}
