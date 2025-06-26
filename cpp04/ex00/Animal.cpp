#include "Animal.hpp"

Animal::Animal() : _type("Unknown") {
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout << "Animal parameterized constructor called for type: " << _type << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type) {
    std::cout << "Animal copy constructor called for type: " << _type << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        _type = other._type;
        std::cout << "Animal assignment operator called for type: " << _type << std::endl;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called for type: " << _type << std::endl;
}

