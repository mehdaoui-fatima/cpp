/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:50:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/10 17:26:33 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap a("Diamondmort");
    DiamondTrap b("Diamondcrawly");
    DiamondTrap c("Diamonddead");
    DiamondTrap d(a);

    b.attack(a.getname()); 
    a.takeDamage(1);
    a.attack(b.getname());
    b.takeDamage(3);
    a.beRepaired(3);
    c.attack(b.getname());
    a.highFivesGuys();
    d.highFivesGuys();
    return (0);
}