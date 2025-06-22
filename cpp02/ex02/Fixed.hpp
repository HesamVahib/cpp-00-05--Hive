#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    private:
        int                 _Value;
        static const int    _fractionalBits = 8;

    public:
        Fixed(void);
        Fixed(const int number);
        Fixed(const float number);
        Fixed(const Fixed &source);
        Fixed &operator=(const Fixed &source);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        bool operator>(const Fixed &source) const;
        bool operator<(const Fixed &source) const;
        bool operator>=(const Fixed &source) const;
        bool operator<=(const Fixed &source) const;
        bool operator==(const Fixed &source) const;
        bool operator!=(const Fixed &source) const;

        Fixed operator+(const Fixed &source) const;
        Fixed operator-(const Fixed &source) const;
        Fixed operator*(const Fixed &source) const;
        Fixed operator/(const Fixed &source) const;

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static const Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static const Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

# endif