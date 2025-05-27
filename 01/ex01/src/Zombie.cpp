#include "../includes/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
  std::cout << "Zombie " << this->name << " is destroyed." << std::endl;
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

Zombie *randomChamp(std::string name) {
  Zombie *zombie = newZombie(name);
  zombie->announce();
  return zombie;
}

Zombie *newZombie(std::string name) {
  Zombie *zombie = new Zombie();
  zombie->setName(name);
  return zombie;
}

Zombie *zombieHorde(int N, std::string name) {
  Zombie *Horde = new Zombie[N];

  for (int i = 0; i < N; i++)
    Horde[i].setName(name);

  return Horde;
}

void zombieHordeAnnounce(int N, Zombie *Horde) {
  for (int i = 0; i < N; i++)
    Horde[i].announce();
}
