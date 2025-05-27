#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    std::cout << "Weapon created" << std::endl;
}

const std::string &Weapon::getType() const {
    return _type;
}

void Weapon::setType(std::string type) {
    _type = type;
}
