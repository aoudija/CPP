#include "PmergeMe.hpp"

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::make_pair;

int is_all_digit(char* av){
    int i = -1;
    while (av[++i]){
        if (!isdigit(av[i]))
            return 0;
    }
    return 1;
}

int Error_Checker(char** av, PmergeMe& obj){
	vector<int> v;
	int j = -1;
	while (av[++j]){
	    if (!is_all_digit(av[j]))
	        return 0;
	}
	for (int i = 0;i < j;i++){

	    if (std::find(v.begin(), v.end(),atoi(av[i])) != v.end())
			return 0;
		v.push_back(atoi(av[i]));
	}
	obj.Initializer(av, j);
    return 1;
}

int	binary_search(vector<int> v,int value){
    int mid, right, left;

	left = 0;
	right = v.size() - 1;
	mid = (v.size() - 1) / 2;
    while(left != right){
		if (value < v[mid]){
		    if (mid == 0)   
				return v[mid];
		    right = mid - 1;
		}
		else if (value > v[mid]){
		    if (mid == (int)v.size() - 1)
				return v[mid];
			left = mid + 1;
		}
		mid = (left + right) / 2;
	}
	return v[mid];
}

//

PmergeMe::PmergeMe():original_size(0), pairs_size(0){
	int J[13] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461};
	for (int i = 0;i < 13;i++){
		JacobsthalNumbers.push_back(J[i]);
	}
}

PmergeMe::PmergeMe(const PmergeMe& pm){
	(void)pm;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& pm){
	(void)pm;
	return *this;
}

PmergeMe::~PmergeMe(){
}

bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;
}

void PmergeMe::Initializer(char** av, int sizeav){
	int i, j;
	j = 0;
	for (i = 0;i < sizeav;i++){//initializing elementsraw
		raw_numbers.push_back(atoi(av[i]));
	}
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

void PmergeMe::SortPairs(){
	std::sort(pairs.begin(), pairs.end(), comparePairs);
	vector<std::pair<int, int> >::iterator it;
	for (it = pairs.begin();it < pairs.end();it++){
		cout << '(' << it->first << " , " << it->second << ')' << endl;
	}
}

void PmergeMe::SetSequence(){
	Sequence.push_back(pairs[0].first);
	for (size_t i = 0;i < pairs.size();i++){
		Sequence.push_back(pairs[i].second);
	}
	cout << "-------" << endl;
	vector<int>::iterator it;
	for (it = Sequence.begin();it < Sequence.end();it++){
		cout << *it << endl;
	}
}

void PmergeMe::SetUnpaired(){
	for (size_t i = 0;i < pairs.size();i++){
		Unpaired.push_back(pairs[i].first);
	}
	cout << "-------" << endl;
	vector<int>::iterator it;
	for (it = Unpaired.begin();it < Unpaired.end();it++){
		cout << *it << endl;
	}
}
/*Jacobsthal numbers (that i need):
	{3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461};*/

void PmergeMe::InsertToSequence(){
	int index, num;
	vector<int>::iterator it;
	cout << "---------" << endl;
	for(size_t i = 1;i < Unpaired.size();i++){
		for(index = JacobsthalNumbers[i] - 1;index >= JacobsthalNumbers[i - 1];index--){
			if (index < (int)Unpaired.size()){
				num = binary_search(Sequence, Unpaired[index]);
				it = std::find(Sequence.begin(), Sequence.end(), num);
				Sequence.insert(it, Unpaired[index]);
			}
		}
	}
	if (original_size != pairs_size)
		Sequence.insert(Sequence.begin(), *(raw_numbers.end() - 1));
	for (it = Sequence.begin();it < Sequence.end();it++){
		cout << *it << endl;
	}
}