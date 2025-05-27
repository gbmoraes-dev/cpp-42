#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie {
  private:
    std::string name;

  public:
    Zombie();
    ~Zombie();

    Zombie(std::string name);

    void announce();

    void setName(std::string name);
    std::string getName();
};

void randomChamp(std::string name);
Zombie *newZombie(std::string name);

#endif
