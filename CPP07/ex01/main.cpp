#include "iter.hpp"

using std::cout;
using std::endl;
using std::string;

int	main(){
	string* s = new string("AMINE");
	iter<string>(s, 5, &f);
	delete s;
	cout << endl;

	int* i = new int[3];
	i[0] = 1;
	i[1] = 2;
	i[2] = 3;
	iter<int>(i, 3, &f);
	delete [] i;
}
