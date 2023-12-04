#include "Span.hpp"

using std::cout;
using std::endl;

Span::Span() {
    N = 0;
    stored = 0;
}

Span::Span(Span& obj){
	*this = obj;
}

Span& Span::operator=(const Span& obj){
	N = obj.N;
	stored = obj.stored;
	for (int i = 0; i <= stored;i++)
		vec.push_back(obj.vec[i]);
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
	throw "Span is full";
}

int Span::shortestSpan(){
	if (vec.empty() || vec.size() == 1)
		throw "Span is empty/size==1";
	vector<int>::iterator small;
	int n1,n2;

	small = std::min_element(vec.begin(), vec.end());
	n1 = *small;
	vec.erase(small);
	small = std::min_element(vec.begin(), vec.end());
	n2 = *small;
	vec.push_back(n1);
	return n2 - n1;
}
//std::sort
int Span::longestSpan(){
	if (vec.empty() || vec.size() == 1)
		throw "Span is empty/size==1";
	vector<int>::iterator big = std::max_element(vec.begin(), vec.end());
	vector<int>::iterator small = std::min_element(vec.begin(), vec.end());
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
	vector<int> v(tab, tab + sizeof(tab)/4);
	vec.insert(vec.end(), v.begin(), v.end());
	// vector<int> v;
	// for (int i = 0;i < (int)size;i++)
	// 	v.push_back(tab[i]);
	// vec.insert(vec.end(), v.begin(), v.end());
}
