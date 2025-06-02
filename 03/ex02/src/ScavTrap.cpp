#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() {
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
  std::cout << "ScavTrap parameter constructor called" << std::endl;
  _name = name;
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
  std::cout << "ScavTrap copy constructor called" << std::endl;
  *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  std::cout << "ScavTrap assignation operator called" << std::endl;
  _name = other._name;
  _hitPoints = other._hitPoints;
  _energyPoints = other._energyPoints;
  _attackDamage = other._attackDamage;
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target) {
  std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}
