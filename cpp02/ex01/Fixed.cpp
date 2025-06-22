#include "fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) {
    std::cout << "Int constructor called" << std::endl;
    _Value = number << _fractionalBits;
}

Fixed::Fixed(const float number) {
    std::cout << "Float constructor called" << std::endl;
    _Value = static_cast<int>(roundf(number * (1 << _fractionalBits)));

}

Fixed::Fixed(const Fixed &source) : _Value(source._Value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source) {
        _Value = source._Value;
    }
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return (_Value);
}

void Fixed::setRawBits(int const raw) {
    _Value = raw;
}

float Fixed::toFloat(void) const {
    return (static_cast<float>(_Value) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const {
    return (_Value >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return (out);
}