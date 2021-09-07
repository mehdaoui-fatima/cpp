/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:37:36 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/07 18:58:45 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a + b << std::endl;
    std::cout << b / a << std::endl;
    std::cout << b - a << std::endl;
    std::cout << a + b << std::endl;
    std::cout << b / a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << --a << std::endl;
    if ( a > b)
        std::cout << a << std::endl;
    if ( a < b)
        std::cout << a << std::endl;
    if (a >= b)
        std::cout << a << std::endl;
    if (a <= b)
        std::cout << a << std::endl;
    if (a == b)
        std::cout << a << std::endl;
    if (a != b)
        std::cout << a << std::endl;
    return 0;
}