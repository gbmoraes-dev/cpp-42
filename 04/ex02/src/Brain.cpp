#include "../includes/Brain.hpp"

Brain::Brain() {
  std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
  *this = other;
}

Brain &Brain::operator=(const Brain &other) {
  if (this == &other)
    return *this;
  for (int i = 0; i < 100; i++)
    this->ideas[i] = other.ideas[i];
  return *this;
}

Brain::~Brain() {
  std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea) {
  this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
  return this->ideas[index];
}
