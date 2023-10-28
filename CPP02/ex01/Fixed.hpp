#include <iostream>
#include <string>

class Fixed{
    int value;
    static const int fract_bits;
    public:
        Fixed();
        Fixed(const Fixed& obj);
        Fixed& operator=(const Fixed& obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
        Fixed(const int num);
        Fixed(const float num);
        float toFloat(void) const;
        int toInt( void ) const;
        Fixed& operator<<(const Fixed& obj);
};
