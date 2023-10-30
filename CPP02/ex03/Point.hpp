#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const Point& obj);
        Point(const float a, const float b);
        // void set_xy(Fixed a, Fixed b);
        Point& operator=(const Point& obj);
        ~Point();
        bool operator==(Point obj) const;
        Fixed getx() const;
        Fixed gety() const;
};
Fixed abs(Fixed i);
Fixed distance(Point a, Point b);
bool bsp( Point const a, Point const b,
    Point const c, Point const point);
