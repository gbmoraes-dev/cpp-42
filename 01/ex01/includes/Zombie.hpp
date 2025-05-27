#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
  private:
    std::string name;
  public:
    Zombie();
    ~Zombie();

  void announce();

  void setName(std::string name);
  std::string getName();
};

Zombie *randomChamp(std::string name);
Zombie *newZombie(std::string name);
Zombie  *zombieHorde(int N, std::string name);
void zombieHordeAnnounce(int N, Zombie *Horde);

#endif
