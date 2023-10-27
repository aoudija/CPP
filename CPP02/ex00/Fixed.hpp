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
        void setfb();
};
