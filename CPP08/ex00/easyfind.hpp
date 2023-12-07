#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

using std::cout;
using std::endl;

template <typename T>
void easyfind(T container, int n){
    if (std::find(container.begin(), container.end(), n) != container.end()){
        cout << "I found your number" << endl;
        return ;
    }
    throw std::runtime_error("Number not found");
}

#endif