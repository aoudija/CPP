#include "Span.hpp"

using std::cout;
using std::endl;
using std::vector;
using std::iterator;

Span::Span() {
    N = 0;
    stored = 0;
}

Span::Span(const Span& obj){
	*this = obj;
}

Span& Span::operator=(const Span& obj){
	N = obj.N;
	stored = obj.stored;
	vec = obj.vec;
	return *this;
}

Span::Span(unsigned int N) {
	this->N = N;
	stored = 0;
}

void Span::addNumber(int n){
	if (stored < N){
		vec.push_back(n);
		stored++;
		return ;
	}
	throw std::runtime_error("Span is full");
}

int Span::shortestSpan(){
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("Span is empty/size==1");
	int shortspan;
	std::sort(vec.begin(), vec.end());
	shortspan = *(vec.begin() + 1) - *vec.begin();
	vector<int>::iterator it;
	for(it = vec.begin(); it < vec.end(); it++){
		if ((it + 1) != vec.end()
			&& (*(it + 1) - *it) < shortspan)
			shortspan = *(it + 1) - *it;
	}
	return shortspan;
}

int Span::longestSpan(){
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("Span is empty/size==1");
	vector<int>::iterator big = std::max_element(vec.begin()
		, vec.end());
	vector<int>::iterator small = std::min_element(vec.begin()
		, vec.end());
	return *big - *small;
}

Span::~Span(){
}

void Span::printSpan(){
	vector<int>::iterator it;
	for(it = vec.begin(); it < vec.end(); it++)
		cout << *it << endl;
}

void	Span::fillSpan(int* tab, unsigned int size){
	vector<int> v(tab, tab + size);
	if (v.size() + vec.size() > (unsigned long)N)
		throw std::runtime_error("cannot surpass N");
	vec.insert(vec.end(), v.begin(), v.end());
}
