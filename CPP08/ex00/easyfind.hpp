#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <iterator>

using std::cout;
using std::endl;

template <typename T>
void easyfind(T container, int n){
    int i = 0;

    while (container[i]){
        if (container[i] == n){
            cout << "I found your number " << n << endl;
            return ;
        }
        i++;
    }
    throw "Number not found";
}

#endif