/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:16:39 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/01 14:43:03 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        Convert c;
        c.defineType(argv[1]);
        std::cout << c.getType() << std::endl;
        c.convert(argv[1]);
        c.printConverted();
    }
    else 
        std::cout << "wrong number of arguments!" << std::endl;
    return (0);
}

