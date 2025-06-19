#include "humanB.hpp"

HumanB::HumanB(const std::string& name)
    : name(name), weapon(nullptr){};
HumanB::~HumanB() {};

void HumanB::attack() const {
    if (!weapon) {
        std::cout << name << " has no weapon to attack with!" << std::endl;
        return;
    }
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}