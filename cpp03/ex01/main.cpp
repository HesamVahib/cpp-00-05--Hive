# include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Scavvy");

    scav.attack("target1");
    scav.takeDamage(5);
    scav.beRepaired(10);
    scav.guardGate();

    ScavTrap scav2("Guardian");
    scav2.attack("target2");
    scav2.takeDamage(4);
    scav2.beRepaired(20);
    scav2.guardGate();


    ScavTrap scav3 = scav2;
    scav3.attack("target3");
    scav3.takeDamage(15);

    ScavTrap scav4("Temp");
    scav4 = scav;
    scav4.beRepaired(5);
}
