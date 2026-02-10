/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:30:24 by julian            #+#    #+#             */
/*   Updated: 2026/02/10 12:02:25 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>

class Test
{
    public:
    
        int val;
        int& ref;
        
        Test(int& reference);
        Test(const Test& other);
        Test& operator=(const Test& other);
        ~Test();
        
};

#endif