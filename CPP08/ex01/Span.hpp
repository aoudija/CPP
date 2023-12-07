#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

class Span {
    int N;
    int stored;
    vector<int> vec;
    public:
        Span();
        ~Span();
        Span(Span& obj);
        Span& operator=(const Span& obj);
        Span(unsigned int N);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void printSpan();
        void fillSpan(int* tab, unsigned int size);
};

#endif
