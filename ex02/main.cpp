/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:09:49 by julian            #+#    #+#             */
/*   Updated: 2026/01/03 16:51:28 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    std::cout << "----- CONSTRUCTEURS -----" << std::endl;
    Fixed a;
    Fixed b(10);
    Fixed c(b);  
    Fixed d(42.42f);

    std::cout << "a: " << a.getRawBits() << std::endl;
    std::cout << "b: " << b.getRawBits() << std::endl;
    std::cout << "c: " << c.getRawBits() << std::endl;
    std::cout << "d: " << d.getRawBits() << std::endl;

    std::cout << "a: " << a.toFloat() << std::endl;
    std::cout << "b: " << b.toFloat() << std::endl;
    std::cout << "c: " << c.toFloat() << std::endl;
    std::cout << "d: " << d.toFloat() << std::endl;

    std::cout << "\n----- AFFECTATION -----" << std::endl;
    a = b;
    std::cout << "a after a = b: " << a.toFloat() << std::endl;

    std::cout << "\n----- COMPARAISONS -----" << std::endl;
    Fixed x(5);
    Fixed y(7);

    std::cout << "x > y: " << (x > y) << std::endl;
    std::cout << "x < y: " << (x < y) << std::endl;
    std::cout << "x >= y: " << (x >= y) << std::endl;
    std::cout << "x <= y: " << (x <= y) << std::endl;
    std::cout << "x == y: " << (x == y) << std::endl;
    std::cout << "x != y: " << (x != y) << std::endl;

    std::cout << "\n----- OPERATEURS ARITHMETIQUES -----" << std::endl;
    Fixed p(3);
    Fixed q(2);

    std::cout << "p + q: " << (p + q) << std::endl;
    std::cout << "p - q: " << (p - q) << std::endl;
    std::cout << "p * q: " << (p * q) << std::endl;
    std::cout << "p / q: " << (p / q) << std::endl;

    std::cout << "\n----- INCREMENTATION / DECREMENTATION -----" << std::endl;
    Fixed inc(1);

    std::cout << "Initial: " << inc << std::endl;

    std::cout << "Pre-increment: " << (++inc) << std::endl;
    std::cout << "Post-increment: " << (inc++) << std::endl;
    std::cout << "After post-increment: " << inc << std::endl;

    std::cout << "Pre-decrement: " << (--inc) << std::endl;
    std::cout << "Post-decrement: " << (inc--) << std::endl;
    std::cout << "After post-decrement: " << inc << std::endl;

    std::cout << "\n----- RAW BITS -----" << std::endl;
    Fixed rawTest(5);

    std::cout << "Raw bits: " << rawTest.getRawBits() << std::endl;
    rawTest.setRawBits(1024);
    std::cout << "After setRawBits(1024): " << rawTest << std::endl;

    std::cout << "\n----- MIN / MAX -----" << std::endl;
    Fixed m(4);
    Fixed n(9);

    std::cout << "min(m, n): " << Fixed::min(m, n) << std::endl;
    std::cout << "max(m, n): " << Fixed::max(m, n) << std::endl;

    const Fixed cm(12);
    const Fixed cn(6);

    std::cout << "min(const): " << Fixed::min(cm, cn) << std::endl;
    std::cout << "max(const): " << Fixed::max(cm, cn) << std::endl;

    std::cout << "\n----- FIN DES TESTS -----" << std::endl;

    return 0;
}
