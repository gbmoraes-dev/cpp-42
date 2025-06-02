#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
  this->type = "WrongCat";
  std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other) {
  *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  if (this == &other)
    return *this;
  this->type = other.type;
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called" << std::endl;
}
