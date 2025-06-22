#include "fixed.hpp"

Fixed::Fixed(void) : _Value(0) {};

Fixed::Fixed(const int number) : _Value(number << _fractionalBits) {};


Fixed::Fixed(const float number) : _Value(static_cast<int>(roundf(number * (1 << _fractionalBits)))) {};

Fixed::Fixed(const Fixed &source) : _Value(source._Value) {};

Fixed &Fixed::operator=(const Fixed &source) {
    if (this != &source) {
        _Value = source._Value;
    }
    return (*this);
}

Fixed::~Fixed() {};

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

bool Fixed::operator>(const Fixed &source) const {
    return (_Value > source._Value);
}

bool Fixed::operator<(const Fixed &source) const {
    return (_Value < source._Value);
}

bool Fixed::operator>=(const Fixed &source) const {
    return (_Value >= source._Value);
}

bool Fixed::operator<=(const Fixed &source) const {
    return (_Value <= source._Value);
}

bool Fixed::operator==(const Fixed &source) const {
    return (_Value == source._Value);
}

bool Fixed::operator!=(const Fixed &source) const {
    return (_Value != source._Value);
}

Fixed Fixed::operator+(const Fixed &source) const {
    Fixed result;
    result._Value = _Value + source._Value;
    return result;
}

Fixed Fixed::operator-(const Fixed &source) const {
    Fixed result;
    result._Value = _Value - source._Value;
    return (result);
}

Fixed Fixed::operator*(const Fixed &source) const {
    Fixed result;
    result._Value = (_Value * source._Value) >> _fractionalBits;
    return (result);
}

Fixed Fixed::operator/(const Fixed &source) const {
    if (source._Value == 0) {
        throw std::runtime_error("Division by zero");
    }
    Fixed result;
    result._Value = (_Value << _fractionalBits) / source._Value;
    return (result);
}

Fixed &Fixed::operator++() {
    _Value++;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    _Value++;
    return (temp);
}

Fixed &Fixed::operator--() {
    _Value--;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    _Value--;
    return (temp);
}

const Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b ? a : b);
}

const Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b ? a : b);
}