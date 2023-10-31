#include "Point.hpp"

int main(){
    bool B = bsp(Point(-1,1), Point(2,1) 
        ,Point(1,-2), Point(0,1));
    if (B == 0)
        std::cout << "point outside triangle" << std::endl;
    else
        std::cout << "point inside triangle" << std::endl;
}
