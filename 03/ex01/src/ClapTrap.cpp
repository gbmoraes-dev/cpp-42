#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  std::cout << "ClapTrap parameter constructor called" << std::endl;
  _name = name;
  _hitPoints = 10;
  _energyPoints = 10;
  _attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
  std::cout << "ClapTrap copy constructor called" << std::endl;
  *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "ClapTrap assignation operator called" << std::endl;
  _name = other._name;
  _hitPoints = other._hitPoints;
  _energyPoints = other._energyPoints;
  _attackDamage = other._attackDamage;
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
  _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
  _hitPoints += amount;
}
