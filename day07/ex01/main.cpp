/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:16:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/04 18:02:52 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::cout << "Int: ";
    int tab_int[4] = {1, 18, 24, 42};
    iter<int>(tab_int, 4, print_);

    std::cout << "\nFloat: ";
    float tab_float[4] = {1.12, 18.18, 24.19, 42.00};
    iter<float>(tab_float, 4, print_);

    std::cout << "\nChar: ";
    char tab_char[4] = {'a', 'c', 'w', 'y'};
    iter<char>(tab_char, 4, print_);

    std::cout << "\nstring: ";
    std::string tab_string[4] = {"this", "is an", "array", "of strings"};
    iter<std::string>(tab_string, 4, print_<std::string>);

    return (0);
}
