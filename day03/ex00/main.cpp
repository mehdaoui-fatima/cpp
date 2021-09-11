/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:50:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/11 10:16:57 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap a("Cmort");
    ClapTrap b("Crawly");
    ClapTrap c("Cdead");
    ClapTrap d(a);

    b.attack(a.getname()); 
    a.takeDamage(10);
    a.attack(b.getname());
    b.takeDamage(5);
    a.beRepaired(5);
    c.attack(b.getname());
    return (0);
}