#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <deque>
#include <iterator>

using std::cout;
using std::endl;
using std::stack;
using std::deque;

template<typename T, typename cntr = deque<T> >
class MutantStack:public stack<T, cntr>{
    public:
        MutantStack():stack<T,cntr>(){}
        MutantStack(const MutantStack& ms){
            this->c = ms.c;
        }
        MutantStack& operator=(const MutantStack& ms){
            this->c = ms.c;
            return *this;
        }
        ~MutantStack(){}
        void printstack(){
            stack<T,cntr> tempstack = *this;
            while (!tempstack.empty()){
                cout << tempstack.top() << endl;
                tempstack.pop();
            }
        }
        typedef typename cntr::iterator iterator;
        iterator begin(){
            return this->c.begin();
        }
        iterator end(){
            return this->c.end();
        }
};

#endif
