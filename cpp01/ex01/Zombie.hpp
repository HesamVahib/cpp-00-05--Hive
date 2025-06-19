#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setName(const std::string name);
        void announce() const;
};

Zombie* zombieHorde(int N, const std::string& name);

# endif