#include "../includes/Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const n) {
  std::cout << "Int constructor called" << std::endl;
  _fixedPointValue = n << _fractionalBits;
}

Fixed::Fixed(float const n) {
  std::cout << "Float constructor called" << std::endl;
  _fixedPointValue = roundf(roundf(n * (1 << _fractionalBits)));
}

Fixed::Fixed(Fixed const &src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &rhs) {
    this->_fixedPointValue = rhs.getRawBits();
  }
  return *this;
}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const {
  return (float)_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const {
  return _fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<( std::ostream &o, Fixed const &rhs ) {
    o << rhs.toFloat();
    return o;
}
