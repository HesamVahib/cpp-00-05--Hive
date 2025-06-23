#include "claptrap.hpp"

int main() {
    ClapTrap clap1("Clappy");
    ClapTrap clap2("Trappy");

    clap1.attack(clap2.getName());
    clap2.takeDamage(1);

    clap2.beRepaired(5);
    clap2.attack(clap1.getName());
    clap1.takeDamage(1);

    for (int i = 0; i < 11; ++i) {
        clap1.attack(clap2.getName());
        clap2.takeDamage(1);
    }

    clap1.beRepaired(3);
    clap2.beRepaired(2);

    return 0;
}
