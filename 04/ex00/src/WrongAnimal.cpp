#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
  std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  if (this == &other)
    return *this;
  this->type = other.type;
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
  return this->type;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal sound" << std::endl;
}
