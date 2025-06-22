#include "fixed.hpp"

Fixed::Fixed() : _Value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source) : _Value(source._Value) {
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(source.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &source) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source) {
        _Value = getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _Value;
}

void Fixed::setRawBits(int const raw) {
    _Value = raw;
}
