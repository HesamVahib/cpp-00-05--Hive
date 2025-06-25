#include "flagTrap.hpp"

FlagTrap::FlagTrap(void) : ClapTrap(""),
                           _Name("FlagTrap"),
                           _HitPoints(100),
                           _EnergyPoints(100),
                           _AttackDamage(30),
                           _FlagMode(false) {
    std::cout << "FlagTrap default constructor called" << std::endl;
}

FlagTrap::FlagTrap(const std::string &name) : ClapTrap(name),
                                               _Name(name),
                                               _HitPoints(100),
                                               _EnergyPoints(100),
                                               _AttackDamage(30),
                                               _FlagMode(false) {
    std::cout << "FlagTrap constructor called for " << name << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &other) : ClapTrap(other),
                                             _Name(other._Name),
                                             _HitPoints(other._HitPoints),
                                             _EnergyPoints(other._EnergyPoints),
                                             _AttackDamage(other._AttackDamage),
                                             _FlagMode(other._FlagMode) {
    std::cout << "FlagTrap copy constructor called for " << other._Name << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        _Name = other._Name;
        _HitPoints = other._HitPoints;
        _EnergyPoints = other._EnergyPoints;
        _AttackDamage = other._AttackDamage;
        _FlagMode = other._FlagMode;
    }

    std::cout << "FlagTrap assignment operator called for " << other._Name << std::endl;

    return *this;
}

FlagTrap::~FlagTrap() {
    std::cout << "FlagTrap destructor called for " << _Name << std::endl;
}

void FlagTrap::attack(const std::string &target) {
    if (_EnergyPoints > 0 && _HitPoints > 0) {
        std::cout << "FlagTrap " << _Name << " attacks " << target
                  << ", causing " << _AttackDamage << " points of damage!" << std::endl;
        _EnergyPoints--;
    } else {
        std::cout << "FlagTrap " << _Name << " cannot attack, insufficient energy or hit points!" << std::endl;
    }
}

void FlagTrap::flagMode() {
    if (!_FlagMode) {
        _FlagMode = true;
        std::cout << "FlagTrap " << _Name << " is now in flag mode!" << std::endl;
    } else {
        std::cout << "FlagTrap " << _Name << " is already in flag mode!" << std::endl;
    }
}

void FlagTrap::highFivesGuys(void) const {
    std::cout << "FlagTrap " << _Name << " requests a high five!" << std::endl;
}