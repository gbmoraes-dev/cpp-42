#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat") {
  this->brain = new Brain();  
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
  std::cout << "Cat type constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other) {
  std::cout << "Cat copy constructor called" << std::endl;
  this->type = other.type;
  this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other) {
  this->type = other.type;
  std::cout << "Cat assignation operator called" << std::endl;
  return *this;
}

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
  delete this->brain;
}

void Cat::makeSound() const {
  std::cout << "MIAAAAAAAAAAAAAUUUUUUUUUUUUUUU" << std::endl;
}

Brain *Cat::getBrain() const {
  return this->brain;
}
