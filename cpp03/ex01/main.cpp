// #include "claptrap.hpp"
# include "ScavTrap.hpp"


int main() {
    ScavTrap scav("Scavvy");

    scav.attack("target1");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
}
