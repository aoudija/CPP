#include "Array.hpp"

using std::cout;
using std::endl;
using std::string;

// struct Point {
//     int x;
//     int y;
// };

// void leaks(){
//     system("leaks Array");
// }

int	main(){
    // atexit(leaks);

	// Array<Point> Parr(2);

	// Parr[0].x = 1;
	// Parr[0].y = 2;
	// Parr[1].x = 0;
	// Parr[1].y = 3;
	// try{
	//     cout << Parr[0].x << endl;
	//     cout << Parr[0].y << endl;
	//     cout << Parr[1].x << endl;
	//     cout << Parr[1].y << endl;
	// }
	// catch(std::exception& e){
	//     std::cout << e.what() << std::endl;
	// }
	Array<string> B(5);

	B[0] = "Amine";
	
	const Array<string> A(B);

	try{
	    cout << A[0] << endl;
	    cout << A[5] << endl;
	}
	catch(std::exception& e){
	    cout << e.what() << endl;
	}
}
