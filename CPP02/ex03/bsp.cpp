#include "Point.hpp"

Fixed abs(Fixed i){
    if (i < 0)
        i = i * (-1);
	return i;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    if (point == a || point == b || point == c)
        return false;
    // Area1 = quarter * (four * (PA)*(PA) * (PB)*(PB)
    //     - (PA*(PA) + PB*(PB) - AB*(AB)) * (PA*(PA) + PB*(PB) - AB*(AB)));
    // Area2 = quarter * (four * (PC)*(PC) * (PA)*(PA)
    //     - (PC*(PC) + PA*(PA) - AC*(AC)) * (PA*(PA) + PC*(PC) - AC*(AC)));
    // Area3 = quarter * (four * (PB)*(PB) * (PC)*(PC)
    //     - (PB*(PB) + PC*(PC) - BC*(BC)) * (PB*(PB) + PC*(PC) - BC*(BC)));
    // if ((Area1 + Area2 + Area3) != Area)
    //     return false;
    Fixed Area, Area1, Area2, Area3;
    Fixed ax, bx, cx, ay, by, cy, px, py;
    ax = a.getx();
    bx = b.getx();
    cx = c.getx();
    ay = a.gety();
    by = b.gety();
    cy = c.gety();
    px = point.getx();
    py = point.gety();
    Fixed half(0.5f);
    Area = half * abs((ax * by + bx * cy + cx * ay)
        - (ay * bx + by * cx + cy * ax));
    // std::cout << Area << std::endl;
    Area1 = half * abs((px * cy + cx * ay + ax * py)
        - (py * cx + cy * ax + ay * px));
    Area2 = half * abs((px * by + bx * cy + cx * py)
        - (py * bx + by * cx + cy * px));
    Area3 = half * abs((px * ay + ax * by + bx * py)
        - (py * ax + ay * bx + by * px));
    // std::cout << (Area1 + Area2) + (Area3) << std::endl;
    if (Area != ((Area1 + Area2) + (Area3)))
        return false;
    return true;
}
//Area = 0.5 * |(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))|