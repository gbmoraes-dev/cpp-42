#include "../includes/Zombie.hpp"

int main() {
  Zombie *horde = zombieHorde(10, "zombie");
  zombieHordeAnnounce(10, horde);
  delete[] horde;
}
