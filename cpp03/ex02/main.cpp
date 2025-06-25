# include "FlagTrap.hpp"

int main() {
    FlagTrap flag1("Flaggy");

    flag1.attack("enemy1");
    flag1.takeDamage(7);
    flag1.beRepaired(12);

    FlagTrap flag2("Sentinel");
    flag2.attack("enemy2");
    flag2.takeDamage(3);
    flag2.beRepaired(8);
    flag2.flagMode();

    FlagTrap flag3 = flag2;
    flag3.attack("enemy3");
    flag3.takeDamage(20);

    FlagTrap flag4("TempFlag");
    flag4 = flag1;
    flag4.beRepaired(6);

    flag1.highFivesGuys();
    flag2.highFivesGuys();
}
