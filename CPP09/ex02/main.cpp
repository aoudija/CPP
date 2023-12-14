#include "PmergeMe.hpp"

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int ac, char** av){
    if (ac < 2)
        return 0;
    PmergeMe Sort;
    av++;
    if (!Error_Checker(av,Sort))
		return 0;
	Sort.SortPairs();
	Sort.SetSequence();
	Sort.SetUnpaired();
	Sort.InsertToSequence();
}
