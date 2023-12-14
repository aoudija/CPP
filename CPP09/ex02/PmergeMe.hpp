#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int	binary_search(vector<int> v,int value);
class PmergeMe{
	vector<int>						raw_numbers;
	vector<std::pair<int, int> >	pairs;
	vector<int>						Sequence;
	vector<int>						Unpaired;
	vector<int>						JacobsthalNumbers;
	// vector<int>						JacobsthalCombinations;
	int								original_size;
	int								pairs_size;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& pm);
		PmergeMe& operator=(const PmergeMe& pm);
		~PmergeMe();
		void Initializer(char** av, int sizeav);
		void SortPairs();
		void SetSequence();
		void SetUnpaired();
		void InsertToSequence();
};
int Error_Checker(char** av, PmergeMe& obj);

#endif