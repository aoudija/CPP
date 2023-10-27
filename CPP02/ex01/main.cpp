#include <iostream>
#include "Fixed.hpp"
//floating point -> representation in memiory && fixed point -> all about it.
int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
// 0.2;0
// 0.2*2= 0.4;0
// 0.4*2=0.8;0
// 0.8*2=1.6;1
// 0.6*2=1.2;1
// 0.2*2 =0.4;0
// 0.09375*2=0.1875;0
// 0.1875*2 =0.375;0
// 0.375*2=0.75;0
// 0.75*2=1.5;1
// 0.5*2=1;1
// (0.09375)10=(0.00011)2
// (0.00011*2^1)
// exponent bias:1+127=128=(11000000)2
// ------------------------------------
// |0|11000000|00011000000000000000000|
// ------------------------------------
// 128/2=64;0
// 64/2=32;0
// 32/2=16;0
// 16/2=8;0
// 8/2=4;0
// 4/2=2;0
// 2/2=1;1
// 1/2=0;1
//
// -128.3
// 0.3*2=0.6;0
// 0.6*2=1.2;1
// 0.2*2=0.4;0
// 0.4*2=0.8;0
// 0.8*2=1.6;1
// 0.6*2=1.2;1
// (128.3)10=(11000000.01001100110011...)2
// 1.1000000010011001100110011...*2^7
// exponent bias:7+127=134=(11000010)2
// ------------------------------------
// |1|11000010|10000000100110011001100|
// ------------------------------------
// 134/2=67;0
// 67/2=33;1
// 33/2=16;0
// 16/2=8;0
// 8/2=4;0
// 4/2=2;0
// 2/2=1;1
// 1/2=0;1
// 0|10000100|11010100000000000000000
// exponent = 5
// sign = positive
// mantissa = 1101010
// number = (111010.1)2
// 58.5
// 0.1 binary
// 2^-1 + 2^-2 + 2^-3 + 2^-4 + 2^-5 + 2^-6 + 2^-7 + 2^-8
// 0.1 = 2^-1 * 1 = 1/2
// 1|00001001|00011001000000000000000|
// 1001(2)=9(10)
// exponent:9 - 127 = -118;
// matissa:00011001
// -1.00011001
// number : -1.09765625*2^-118;


// 00000101 (5)  << 1 = 5 * 2^1 = 00001010 10
// 00000101  /256   >> 8
// 00000010 2