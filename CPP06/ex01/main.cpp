#include "Serializer.hpp"

using std::cout;
using std::endl;
using std::string; 

int main(){

	// Data	test, data = {"Amine", "Oudija", "0612275611", 21};
	// uintptr_t u_t = Serializer::serialize(&data);
	// test = *Serializer::deserialize(u_t);
	// cout << test.age << ", " + test.first_name + ", " + test.last_name
	// 	+ ", " + test.phone_number << endl;

	/*Some Other Tests*/
	// float f = 14.0121;
	// int *x = static_cast<int*>(&f);
	// float *k = static_cast<float*>(&x);
	// int *x = (int*)(&f);
	// float *k = (float*)(&x);
	// int *x = reinterpret_cast<int*>(&f);
	// float *k = reinterpret_cast<float*>(x);
	// cout << *k;
	return 0;
}
