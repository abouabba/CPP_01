#include "Weapon.hpp"


Weapon::Weapon(std::string type) {
    std::cout << type << "Weapon constructor called" << std::endl;
}

void Weapon::setType(const std::string& type) {
    this->type = type;
}

const std::string& Weapon::getType() const {
    return type;
}