#include "zombie.hpp"

void Zombie::announce() const {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main(int argc, char** argv) {
    if (argc != 3) {
        std::cout << "Usage: ./zombie" << " <zombie_name> " << "<zombie_amount>" << std::endl;
        return 1;
    };

    int amount = std::stoi(argv[2]);
    if (amount <= 0 || amount > 100) {
        std::cerr << "Error: Amount must be between 1 and 100." << std::endl;
        return 1;
    }
    std::string zombieName = argv[1];
    Zombie* horde = zombieHorde(amount, zombieName);
    for (int i = 0; i < amount; ++i) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}