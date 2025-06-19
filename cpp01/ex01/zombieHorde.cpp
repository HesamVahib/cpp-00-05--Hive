#include "zombie.hpp"

void Zombie::setName(const std::string name) {
    this->name = name;
}

Zombie* zombieHorde(int N, const std::string& name) {
    if (N <= 0) {
        std::cerr << "Error: Amount must be greater than 0." << std::endl;
        return nullptr;
    }
    
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name + std::to_string(i + 1));
    }
    
    return horde;
}