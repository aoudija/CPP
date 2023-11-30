#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template<class T>
class Array {
	T* array;
	unsigned int asize;
	public:
		Array(){
			array = NULL;
			asize = 0;
		}
		Array(unsigned int n){
			asize = n;
			array = new T[asize];
		}
		Array(const Array& obj){
			asize = obj.asize;
			array = new T[asize];
			for (int i = 0;i < (int)asize;i++){
				array[i] = obj.array[i];
			}
		}
		Array operator=(const Array& obj){
			asize = obj.asize;
			if (array)
				delete [] array;
			array = new T[asize];
			for (int i = 0;i < (int)asize;i++){
				array[i] = obj.array[i];
			}
			return *this;
		}
		unsigned int	size(){
			return asize;
		}
		class OutOfRangeException:public std::exception{
			const char* what() const throw(){
				return "index is out of range";
			}
		};
		T& operator[](unsigned int index){
			if (index >= asize)
				throw OutOfRangeException();
			return array[index];
		}
		const T& operator[](unsigned int index) const {
			if (index >= asize)
				throw OutOfRangeException();
			return array[index];
		}
		~Array(){
			delete [] array;
		}
};

#endif
