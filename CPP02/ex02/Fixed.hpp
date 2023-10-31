#include <iostream>
#include <string>

class Fixed{
    int value;
    static const int fract_bits;
    public:
        Fixed();
        Fixed(const Fixed& obj);
        Fixed& operator = (const Fixed& obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
        Fixed(const int num);
        Fixed(const float num);
        float toFloat(void) const;
        int toInt( void ) const;
        bool operator==(Fixed obj) const;
        bool operator!=(Fixed obj) const;
        bool operator>=(Fixed obj) const;
        bool operator<=(Fixed obj) const;
        bool operator<(Fixed obj) const;
        bool operator>(Fixed obj) const;
        Fixed operator+(Fixed obj);
        Fixed operator-(Fixed obj);
        Fixed operator*(Fixed obj);
        Fixed operator/(Fixed obj);
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed& min(Fixed& f1, Fixed& f2);
        static const Fixed& min(const Fixed& f1, const Fixed& f2);
        static Fixed& max(Fixed& f1, Fixed& f2);
        static const Fixed& max(const Fixed& f1, const Fixed& f2);
};
std::ostream& operator << (std::ostream& os, const Fixed& obj);
