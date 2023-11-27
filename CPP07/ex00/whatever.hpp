#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string.h>

template <typename T>
void	swap(T& i, T& j){
	T temp = i;
	i = j;
	j = temp;
}

template <typename T>
T	min(T i, T j){
	if(i < j)
		return i;
	if(i > j)
		return j;
	return j;
}

template <typename T>
T	max(T i, T j){
	if(i > j)
		return i;
	if(i < j)
		return j;
	return j;
}

#endif