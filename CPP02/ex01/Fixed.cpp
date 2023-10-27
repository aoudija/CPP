#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed(){
    std::cout << "Default constructor called\n";
    value = 0;
}

Fixed::Fixed(const Fixed& obj){
    std::cout << "Copy constructor called\n";
    *this = obj;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called\n";
    return value;
}

Fixed& Fixed::operator=(const Fixed& obj){
    std::cout << "Copy assignment operator called\n";
    value = obj.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw){
    value = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called";
}

Fixed::Fixed(const int num){
    std::cout << "Int constructor called";
    value = num;
}

Fixed::Fixed(const float num){

}

// 0.4321 * 2 = 0.8642;0
//0.8642 * 2 = 1.7284;1
//0.7284 * 2 = 1.4568;1
//0.4568 * 2 = 0.9136;0
//0.9136 * 2 = 1.8272;1
//0.8272 * 2 = 1.6544;1
//0.6544 * 2 = 1.3088;1
//0.3088 * 2 = 0.6176;1
//01101111 = 0.43359375
