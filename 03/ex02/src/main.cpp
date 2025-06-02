#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

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

  FragTrap fragtrap1("Fragtrap");
  FragTrap fragtrap2(fragtrap1);
  FragTrap fragtrap3 = fragtrap1;

  fragtrap1.attack("enemy");
  fragtrap1.highFivesGuys();

  return 0;
}
