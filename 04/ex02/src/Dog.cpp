#include "../includes/Dog.hpp"

Dog::Dog() {
  this->brain = new Brain();
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
  std::cout << "Dog type constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other) {
  std::cout << "Dog copy constructor called" << std::endl;
  this->type = other.type;
  this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other) {
  this->type = other.type;
  std::cout << "Dog assignation operator called" << std::endl;
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
  delete this->brain;
}

void Dog::makeSound() const {
  std::cout << "Woof Woof" << std::endl;
}

void Dog::setIdea(int i, std::string idea) const {
  this->brain->setIdea(i, idea);
}

std::string Dog::getIdea(int i) const {
  return this->brain->getIdea(i);
}
