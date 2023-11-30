#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename R>
void	f(R& value){
	std::cout << value;
}

template<typename T, typename R>
void	iter(T* array, size_t N, void (*f)(R&)){
	for (size_t i = 0; i < N; i++){
		(*f)(array[i]);
    }
}

#endif