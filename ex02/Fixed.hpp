/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 10:54:11 by julian            #+#    #+#             */
/*   Updated: 2025/12/27 18:02:39 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();                    // Constructeur par défaut
    Fixed(const int);           // Constructeur avec un int
    Fixed(const Fixed& other);  // Constructeur de copie
    Fixed& operator=(const Fixed& other); // Opérateur d’affectation
    
    // Opérateurs de comparaison
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Opérateurs arithmétiques
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Incrémentation / décrémentation
    Fixed& operator++();    // pré-incrémentation
    Fixed operator++(int);  // post-incrémentation
    Fixed& operator--();    // pré-décrémentation
    Fixed operator--(int);  // post-décrémentation

    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Opérateurs arithmétiques
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Incrémentation / décrémentation
    Fixed& operator++();    // pré-incrémentation
    Fixed operator++(int);  // post-incrémentation
    Fixed& operator--();    // pré-décrémentation
    Fixed operator--(int);  // post-décrémentation
    
    ~Fixed();                   // Destructeur

    int  getRawBits(void) const;
    void setRawBits(int const raw);
    // Fonctions min / max
    static Fixed&       min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);

    static Fixed&       max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

};

#endif