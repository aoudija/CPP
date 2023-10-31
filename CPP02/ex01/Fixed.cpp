#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed(){
    std::cout << "Default constructor called"<< std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& obj){
    std::cout << "Copy constructor called"<< std::endl;
    *this = obj;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return value ;
}

Fixed Fixed::operator = (const Fixed& obj){
    std::cout << "Copy assignment operator called"<< std::endl;
    value = (float)obj.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw){
    value = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called"<< std::endl;
}

Fixed::Fixed(const int num){
    std::cout << "Int constructor called"<< std::endl;;
    setRawBits(roundf(num * 256));
}

Fixed::Fixed(const float num){
    std::cout << "Float constructor called"<< std::endl;;
    setRawBits(roundf(num * 256));
}

float Fixed::toFloat(void)const{
    return ((float)value / 256);
}

int Fixed::toInt(void)const{
    return (value / 256);
}

std::ostream& operator << (std::ostream& os, const Fixed& obj){
    os << ((float)obj.getRawBits() / 256);
    return os;
}

