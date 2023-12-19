#pragma once
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <utility>
#include <algorithm>
#include <ctime>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::make_pair;

int is_all_digit(char* av);
bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b);

template<typename T>
int Error_Checker(char** av, T& obj){
	vector<int> v;
	int j = -1;
	while (av[++j]){
		if (!is_all_digit(av[j])){
			cout << "Error" << endl;
			return 0;
		}
	}
	if (j > 3000){
		cout << "Error: more than 3000 numbers" << endl;
		return 0;
	}
	for (int i = 0;i < j;i++){
		if (std::find(v.begin(), v.end(),atoi(av[i])) != v.end()){
			cout << "Error: duplicated number" << endl;
			return 0;
		}
		v.push_back(atoi(av[i]));
	}
	obj.Initializer(av, j);
    return 1;
}

template<typename T, typename T2>
class PmergeMe{
	T2	pairs;
	T		raw_numbers;
	T		Sequence;
	T		Unpaired;
	T		JacobsthalNumbers;
	int		original_size;
	int		pairs_size;
	public:
		PmergeMe():original_size(0), pairs_size(0){
			int J[13] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461};
			for (int i = 0;i < 13;i++){
				JacobsthalNumbers.push_back(J[i]);
			}
		}
		PmergeMe(const PmergeMe& pm){
			*this = pm;
		}
		PmergeMe& operator=(const PmergeMe& pm){
			pairs = pm.pairs;
			raw_numbers = pm.raw_numbers;
			Sequence = pm.Sequence;
			Unpaired = pm.Unpaired;
			JacobsthalNumbers = pm.JacobsthalNumbers;
			original_size = pm.original_size;
			pairs_size = pm.pairs_size;
			return *this;
		}
		~PmergeMe(){}
		void Initializer(char** av, int sizeav){
			int i, j;
			j = 0;
			for (i = 0;i < sizeav;i++)//initializing elementsraw
				raw_numbers.push_back(atoi(av[i]));
			original_size = sizeav;
			pairs_size = sizeav / 2;
			if (sizeav % 2 != 0){
				original_size = sizeav;
				sizeav--;
				pairs_size = sizeav / 2;
			}
			i = 0;
			while(i < sizeav && av[i + 1]){//initializing pairs && making order inside pairs
				if (atoi(av[i]) < atoi(av[i + 1]))
					pairs.push_back(make_pair(atoi(av[i]), atoi(av[i + 1])));
				else
					pairs.push_back(make_pair(atoi(av[i + 1]), atoi(av[i])));
				i += 2;
			}
		}
		void SortPairs(){
			std::sort(pairs.begin(), pairs.end(), &comparePairs);
		}
		void SetSequence(){
			Sequence.push_back(pairs[0].first);
			for (size_t i = 0;i < pairs.size();i++)
				Sequence.push_back(pairs[i].second);
		}

		void SetUnpaired(){
			for (size_t i = 0;i < pairs.size();i++){
				Unpaired.push_back(pairs[i].first);
			}
		}
		void InsertToSequenceAndSort(){
			int index;
			int y = 0;
			for (;y < 13;y++){
				if (JacobsthalNumbers[y] >= (int)pairs_size)
					break;
			}
			for(int i = 1;i <= y;i++){
				index = JacobsthalNumbers[i] - 1;
				while (index >= JacobsthalNumbers[i - 1]){
					if (index < (int)Unpaired.size())
						Sequence.insert(std::lower_bound(Sequence.begin(),
							Sequence.end(), Unpaired[index]), Unpaired[index]);
					index--;
				}
			}
			if (original_size != pairs_size * 2)
				Sequence.insert(std::lower_bound(Sequence.begin(),
					Sequence.end(), *(raw_numbers.end() - 1)), *(raw_numbers.end() - 1));
		}
		int	GetNumberOfElements(){
			return original_size;
		}
		void GetRawNumbers(){
			typename T::iterator it;
			cout << "Before: ";
			for (it = raw_numbers.begin();it != raw_numbers.end();it++)
				cout << *it << ' ';
			cout << endl;
		}
		void GetSortedSequence(){
			typename T::iterator it;
			cout << "After: ";
			for (it = Sequence.begin();it != Sequence.end();it++)
				cout << *it << ' ';
			cout << endl;
		}
};

#endif