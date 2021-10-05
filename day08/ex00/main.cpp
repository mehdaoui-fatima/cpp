/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:19:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/05 13:00:16 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    // std::vector<int> ar;
    // std::vector<int>::iterator iter;
    
    // for(int i = 0; i<10; i++)
    //     ar.push_back(i + 1);
    // for(iter =  ar.begin(); iter < ar.end() ; iter++)
    //     std::cout << *iter << std::endl;

    std::vector<int> arr;
    arr.push_back(10);
    arr.push_back(42);
    arr.push_back(13);
    
    std::cout << easyfind(&arr, 18);
    return (0);
}