#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main() {
  ClapTrap claptrap1("ClapTrap");
  ClapTrap claptrap2(claptrap1);
  ClapTrap claptrap3 = claptrap1;

  claptrap1.attack("enemy");
  claptrap1.takeDamage(5);
  claptrap1.beRepaired(3);

  ScavTrap scavtrap1("ScavTrap");
  ScavTrap scavtrap2(scavtrap1);
  ScavTrap scavtrap3 = scavtrap1;

  scavtrap1.attack("enemy");
  scavtrap1.guardGate();

  return 0;
}
