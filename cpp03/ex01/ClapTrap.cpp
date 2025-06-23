#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
    : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
    std::cout << "ClapTrap " << _Name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source)
    : _Name(source._Name), _HitPoints(source._HitPoints),
      _EnergyPoints(source._EnergyPoints), _AttackDamage(source._AttackDamage) {
    std::cout << "ClapTrap " << _Name << " copied." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source) {
    if (this != &source) {
        _Name = source._Name;
        _HitPoints = source._HitPoints;
        _EnergyPoints = source._EnergyPoints;
        _AttackDamage = source._AttackDamage;
    }
    std::cout << "ClapTrap " << _Name << " assigned." << std::endl;
    return *this;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << _Name << " destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (_HitPoints == 0 || _EnergyPoints == 0) {
        std::cout << "ClapTrap " << _Name << " cannot attack, no hit points or energy left." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _Name << " attacks " << target
              << ", causing 1 points of damage!" << std::endl;
    _EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_HitPoints == 0 || _EnergyPoints == 0) {
        std::cout << "ClapTrap " << _Name << " is already destroyed." << std::endl;
        return;
    }
    _HitPoints = (_HitPoints > amount) ? (_HitPoints - amount) : 0;
    std::cout << "ClapTrap " << _Name << " takes " << amount
              << " points of damage! Hit points left: " << _HitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_HitPoints == 0 || _EnergyPoints == 0) {
        std::cout << "ClapTrap " << _Name << " cannot be repaired, no hit points or energy left." << std::endl;
        return;
    }
    _HitPoints += amount;
    _EnergyPoints--;
    std::cout << "ClapTrap " << _Name << " repairs itself for " << amount
              << " points! Hit points now: " << _HitPoints << std::endl;
}

std::string ClapTrap::getName(void) const {
    return _Name;
}