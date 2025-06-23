#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    private:
        std::string _Name;
        unsigned int _HitPoints;
        unsigned int _EnergyPoints;
        unsigned int _AttackDamage;

    public:
        ClapTrap(void);
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &source);
        ClapTrap &operator=(const ClapTrap &source);
        ~ClapTrap(void);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName(void) const;
};

#endif