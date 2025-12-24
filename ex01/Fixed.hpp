/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 10:54:11 by julian            #+#    #+#             */
/*   Updated: 2025/12/24 01:33:46 by julian           ###   ########.fr       */
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
    Fixed(const int);
    Fixed(const Fixed& other);  // Constructeur de copie
    Fixed& operator=(const Fixed& other); // Opérateur d’affectation
    ~Fixed();                   // Destructeur

    int  getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif