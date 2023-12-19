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
void	do_everything(T& Sort, char** av){
	if (!Error_Checker(av,Sort))
		return ;
	Sort.SortPairs();
	Sort.SetSequence();
	Sort.SetUnpaired(); 
	Sort.InsertToSequenceAndSort();
}

int main(int ac, char** av){
	if (ac < 3)
		return 0;
	av++;
	timeval startTime2, endTime2,startTime1, endTime1;

	PmergeMe<vector<int> , deque<std::pair <int, int > > > Sort1;
	gettimeofday(&startTime1, nullptr);
	do_everything(Sort1, av);
	gettimeofday(&endTime1, nullptr);
	long elapsedTime1 = (endTime1.tv_sec - startTime1.tv_sec)
		* 1000000 + (endTime1.tv_usec - startTime1.tv_usec);

	PmergeMe<deque<int> , vector<std::pair <int, int > > > Sort2;
	gettimeofday(&startTime2, nullptr);
	do_everything(Sort2, av);
	gettimeofday(&endTime2, nullptr);
	long elapsedTime2 = (endTime2.tv_sec - startTime2.tv_sec)
		* 1000000 + (endTime2.tv_usec - startTime2.tv_usec);

	Sort2.GetRawNumbers();
	Sort2.GetSortedSequence();

	cout << "Time to process a range of "
	<< Sort1.GetNumberOfElements() << " elements with std::deque" << " : "
	<< elapsedTime1 << " us" << endl;

	cout << "Time to process a range of "
	<< Sort2.GetNumberOfElements() << " elements with std::vector" << " : "
	<< elapsedTime2 << " us" << endl;
}
