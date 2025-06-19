#include "zombie.hpp"

void Zombie::announce() const {
    std::cout << name << ":" <<" Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

int main() {
    Zombie* zombie = newZombie("Foo");
    zombie->announce();
    delete zombie;

    randomChump("Hesam");

    return 0;
}