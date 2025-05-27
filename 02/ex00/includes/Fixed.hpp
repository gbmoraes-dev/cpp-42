#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
  public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &src);
    Fixed &operator=(const Fixed &rhs);

    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif
