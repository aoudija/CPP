#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void	f(T value){
	std::cout << value;
}

template<typename T>
void	iter(T *array, size_t N, void (*f)(T)){
	for (size_t i = 0; i < N; i++){
		(*f)(array[i]);
    }
}

#endif