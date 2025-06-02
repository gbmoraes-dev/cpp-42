#include "../includes/ClapTrap.hpp"

int main() {
  ClapTrap claptrap1("ClapTrap");
  ClapTrap claptrap2(claptrap1);
  ClapTrap claptrap3 = claptrap1;

  claptrap1.attack("enemy");
  claptrap1.takeDamage(5);
  claptrap1.beRepaired(3);

  return 0;
}
