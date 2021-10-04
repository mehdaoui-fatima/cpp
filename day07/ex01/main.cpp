/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:16:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/04 13:29:53 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main()
{
    std::cout << "int: ";
    int tab_int[4] = {1, 18, 24, 42};
    iter<int>(tab_int, 4, print);

    std::cout << "\nfloat: ";
    float tab_float[4] = {1.12, 18.18, 24.19, 42.00};
    iter<float>(tab_float, 4, print);

    std::cout << "\nchar: ";
    char tab_char[4] = {'a', 'c', 'w', 'y'};
    iter<char>(tab_char, 4, print);

    std::cout << "\nstring: ";
    std::string tab_string[4] = {"this", "is an", "array", "of strings"};
    iter<std::string>(tab_string, 4, print);

    return (0);
}