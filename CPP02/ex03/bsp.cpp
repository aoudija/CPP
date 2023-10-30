#include "Point.hpp"

Fixed abs(Fixed i){
    if (i < 0)
        i = i * (-1);
	return i;
}

Fixed distance(Point a, Point b){
	Fixed Distance(abs(a.getx() - b.getx())
        + abs(a.gety() - b.gety()));
    return Distance;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    if (point == a || point == b || point == c)
        return false;
    // std::cout << distance(Point(0,2), Point(7,-1)) << std::endl;
    // Fixed AB, AC, BC, PA, PB, PC;
    // Fixed Area, Area1, Area2, Area3;
    // AB = distance(a,b);
    // AC = distance(a,c);
    // BC = distance(b,c);
    // PA = distance(a,point);
    // PB = distance(b,point);
    // PC = distance(c,point);
    // Fixed four(4), quarter(0.25f);
    // Area = quarter * (four * (AB)*(AB) * (AC)*(AC)
    //     - (AB*(AB) + AC*(AC) - BC*(BC)) * (AB*(AB) + AC*(AC) - BC*(BC)));
    // std::cout << Area;
    // Area1 = quarter * (four * (PA)*(PA) * (PB)*(PB)
    //     - (PA*(PA) + PB*(PB) - AB*(AB)) * (PA*(PA) + PB*(PB) - AB*(AB)));
    // Area2 = quarter * (four * (PC)*(PC) * (PA)*(PA)
    //     - (PC*(PC) + PA*(PA) - AC*(AC)) * (PA*(PA) + PC*(PC) - AC*(AC)));
    // Area3 = quarter * (four * (PB)*(PB) * (PC)*(PC)
    //     - (PB*(PB) + PC*(PC) - BC*(BC)) * (PB*(PB) + PC*(PC) - BC*(BC)));
    // if ((Area1 + Area2 + Area3) != Area)
    //     return false;
    float Area;
    Fixed xa = a.getx();
    a.getx();
    return true;
    
}
