#include "../includes/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
  std::cout << "Zombie " << this->name << " is destroyed." << std::endl;
}

Zombie::Zombie(std::string name) {
  this->name = name;
}

void Zombie::announce() {
  std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
  this->name = name;
}

std::string Zombie::getName() {
  return this->name;
}

void randomChamp(std::string name) {
  Zombie zombie = Zombie(name);
  zombie.announce();
}

Zombie *newZombie(std::string name) {
    return new Zombie(name);
}
