#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

using std::cout;
using std::endl;
using std::iterator;

template <typename T>
void easyfind(T container, int n){
    if (std::find(container.begin(), container.end(), n) != container.end()){
        cout << "I found your number" << endl;return ;
    }
    throw "Number not found";
}

#endif