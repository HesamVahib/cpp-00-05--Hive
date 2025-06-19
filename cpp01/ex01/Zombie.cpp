#include "zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " is destroyed." << std::endl;
}