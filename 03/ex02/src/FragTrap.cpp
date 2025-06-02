#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  std::cout << "FragTrap parameter constructor" << std::endl;
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "FragTrap copy constructor" << std::endl;
  *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  std::cout << "FragTrap assignation operator" << std::endl;
  _name = other._name;
  _hitPoints = other._hitPoints;
  _energyPoints = other._energyPoints;
  _attackDamage = other._attackDamage;
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap destructor" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << _name << " says: \"High five!\"" << std::endl;
}
