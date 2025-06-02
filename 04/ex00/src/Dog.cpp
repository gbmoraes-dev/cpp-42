#include "../includes/Dog.hpp"

Dog::Dog() {
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
  std::cout << "Dog type constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other) {
  *this = other;
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
  this->type = other.type;
  std::cout << "Dog assignation operator called" << std::endl;
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
  std::cout << "Woof Woof" << std::endl;
}
