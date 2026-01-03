/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:33:11 by julian            #+#    #+#             */
/*   Updated: 2026/01/03 16:49:33 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed (int n)
{
    this->_value = n;
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

bool Fixed::operator>(const Fixed& other) const
{
    return this->_value > other._value;
}

bool Fixed::operator<(const Fixed& other) const
{
    return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const
{
    return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return this->_value != other._value;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(this->_value + other._value);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(this->_value - other._value);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    long tmp = (long)this->_value * (long)other._value;
    result.setRawBits(tmp >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    long tmp = ((long)this->_value << _fractionalBits) / other._value;
    result.setRawBits(tmp);
    return result;
}

Fixed& Fixed::operator++()
{
    _value += 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    _value += 1;
    return temp;
}

Fixed& Fixed::operator--()
{
    _value -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    _value -= 1;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}




