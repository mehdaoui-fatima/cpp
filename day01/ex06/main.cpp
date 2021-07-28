/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:56:23 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/28 19:54:21 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int getLevel(char *str)
{
    int res = -1;
    
    std::cout << str;
    if (strcmp(str, "INFO") == 0)
         res = 1;
    else if (strcmp(str, "DEBUG") == 0)
        res = 2;
    else if (strcmp(str, "WARNING") == 0)
        res = 3;
    else if (strcmp(str, "ERROR") == 0)
        res = 4;
    return res;
}

int main(int c, char** argv)
{
    Karen karen;
    int levels[4] = {1,2,3,4};
    int level = 0;
    if (c == 2)
    {
        level = getLevel(argv[1]);
        karen.karenFilter(level);
    }
    return (0);
}