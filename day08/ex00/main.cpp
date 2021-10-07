/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:19:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/07 13:31:14 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
int main()
{
    std::vector<int> arr;
    arr.push_back(10);
    arr.push_back(42);
    arr.push_back(13);

    try {
         easyfind(arr, 13);
    }catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try {
         easyfind(arr, 422);
    }catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}