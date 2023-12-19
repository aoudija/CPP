#include "PmergeMe.hpp"

int is_all_digit(char* av){
	int i = -1;
	while (av[++i]){
		if (!isdigit(av[i]))
			return 0;
	}
	return 1;
}

bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b) {
	return a.second < b.second;
}