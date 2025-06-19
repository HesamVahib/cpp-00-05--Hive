#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(const std::string& name);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon& weapon);
};

# endif