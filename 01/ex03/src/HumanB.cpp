#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
  std::cout << "HumanB created" << std::endl;
}

void HumanB::attack() {
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}
