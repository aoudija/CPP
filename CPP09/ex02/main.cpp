#include "PmergeMe.hpp"
#include <sys/time.h>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::deque;

#include <unistd.h>
#include <stdlib.h>

template<typename T> 
void	do_everything(T Sort, char** av, const char* s){
	timeval startTime, endTime;
	gettimeofday(&startTime, nullptr);
	if (!Error_Checker(av,Sort))
		return ;
	Sort.SortPairs();
	Sort.SetSequence();
	Sort.SetUnpaired(); 
	Sort.InsertToSequenceAndSort();
	gettimeofday(&endTime, nullptr);
	long elapsedTime = (endTime.tv_sec - startTime.tv_sec)
		* 1000000 + (endTime.tv_usec - startTime.tv_usec);
	cout << "Time to process a range of "
	<< Sort.GetNumberOfElements() << " elements with "<< s << " : "
	<< elapsedTime << " us" << endl;
}

int main(int ac, char** av){
	if (ac < 3)
		return 0;
	av++;
	PmergeMe<vector<int> , vector<std::pair <int, int > > > Sort1;
	do_everything(Sort1, av, "std::vector");
	PmergeMe<deque<int> , deque<std::pair <int, int > > > Sort2;
	do_everything(Sort2, av, "std::deque");
}
