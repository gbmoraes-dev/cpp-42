#include "../includes/Zombie.hpp"

int main() {
  Zombie *zombie = newZombie("Zombie1");
  zombie->announce();
  delete zombie;

  Zombie *zombie2 = newZombie("Zombie2");
  zombie2->announce();
  delete zombie2;

  randomChamp("Zombie3");
}
