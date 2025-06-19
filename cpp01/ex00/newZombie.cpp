#include "zombie.hpp"

Zombie::Zombie() {};

void Zombie::setName(const std::string &name) {
    this->name = name;
}

Zombie* newZombie(const std::string& name) {
    Zombie* zombie = new Zombie();
    zombie->setName(name);
    return zombie;
}