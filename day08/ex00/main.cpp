/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:19:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/05 17:41:49 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
int main()
{
    std::vector<int> arr;
    arr.push_back(10);
    arr.push_back(42);
    arr.push_back(13);
    std::cout << easyfind(arr, 13);
    return (0);
}