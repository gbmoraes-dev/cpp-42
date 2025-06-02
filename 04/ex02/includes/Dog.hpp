#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  protected:
    Brain *brain;
  public:
  Dog();
  Dog(std::string type);
  Dog(const Dog &other);
  Dog &operator=(const Dog &other);
  virtual ~Dog();

  void makeSound() const;

  void setIdea(int i, std::string idea) const;
  std::string getIdea(int i) const;
};

#endif
