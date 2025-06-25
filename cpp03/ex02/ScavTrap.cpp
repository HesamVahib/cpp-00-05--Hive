#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : 
                            ClapTrap(""),
                            _Name(""),
                            _HitPoints(100),
                            _EnergyPoints(50),
                            _AttackDamage(20),
                            _GateKeeperMode(false) {
    std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : 
                                                ClapTrap(name),
                                                _Name(name),
                                                _HitPoints(100),
                                                _EnergyPoints(50),
                                                _AttackDamage(20),
                                                _GateKeeperMode(false) {
    std::cout << "ScavTrap constructor called for " << name << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    _Name = other._Name;
    _HitPoints = other._HitPoints;
    _EnergyPoints = other._EnergyPoints;
    _AttackDamage = other._AttackDamage;
    _GateKeeperMode = other._GateKeeperMode;

    std::cout << "ScavTrap copy constructor called for " << _Name << "." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        _Name = other._Name;
        _HitPoints = other._HitPoints;
        _EnergyPoints = other._EnergyPoints;
        _AttackDamage = other._AttackDamage;
        _GateKeeperMode = other._GateKeeperMode;
    }
    std::cout << "ScavTrap assignment operator called for " << _Name << "." << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << _Name << "." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _Name << " is now in Gate Keeper mode." << std::endl;
    _GateKeeperMode = true;
}

void ScavTrap::attack(const std::string &target) {
    if (_HitPoints == 0 || _EnergyPoints == 0) {
        std::cout << "ScavTrap " << _Name << " cannot attack, no hit points or energy left." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _Name << " attacks " << target
              << ", causing " << _AttackDamage << " points of damage!" << std::endl;
    _EnergyPoints--;
}