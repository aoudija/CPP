#include "RPN.hpp"

using std::cout;
using std::endl;	
using std::string;

int	main(int ac, char** av){
	if (ac != 2)
		return 0;
	string notation(av[1]);
	if (!check_errors(notation)){
		cout << "Error" << endl;
		return 0;
	}
	Calculate(notation); 
}

