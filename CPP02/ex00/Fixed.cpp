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
    value = (float)obj.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw){
    value = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called";
}
