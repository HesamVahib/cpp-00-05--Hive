#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {
    private:
        std::string _Name;
        unsigned int _HitPoints;
        unsigned int _EnergyPoints;
        unsigned int _AttackDamage;
        bool _FlagMode;

    public:
        FlagTrap(void);
        FlagTrap(const std::string &name);
        FlagTrap(const FlagTrap &other);
        FlagTrap &operator=(const FlagTrap &other);
        ~FlagTrap();

        void attack(const std::string &target) override;
        void flagMode();

        void highFivesGuys(void) const;
}; 

#endif