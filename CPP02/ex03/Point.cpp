#include "Point.hpp"

Point::Point():x(0),y(0){
}

Point::Point(const Point& obj):x(obj.x), y(obj.y){
}

Point::Point(const float a, const float b):x(a), y(b){	
}

// void Point::set_xy(Fixed a, Fixed b){x(a); y(b);}

Point& Point::operator=(const Point& obj){
	(void)obj;
	return *this;
}

Point::~Point(){
}

bool Point::operator==(Point obj) const{
    return ((x == obj.x) && (y == obj.y));
}

Fixed Point::getx(){
	return x;
}
Fixed Point::gety(){
	return y;
}
