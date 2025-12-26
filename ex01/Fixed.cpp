#include "Fixed.hpp"

Fixed::Fixed () : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Your constructor has been called with int n = '" << n << "'" << std::endl; 
    _value = n << _fractionalBits;
    std::cout << "Apres le décalage, _value = " << _value  << std::endl;
}

Fixed::Fixed(const float n)
{
    std::cout << "Your constructor has been called with float n = '" << n << "'" << std::endl; 
    _value = roundf(n *( 1 << _fractionalBits));
    std::cout << "Apres le décalage, _value = " << _value  << std::endl;
}

Fixed::Fixed (const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other.   _value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

float Fixed::toFloat() const
{
    return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt() const
{
    return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}