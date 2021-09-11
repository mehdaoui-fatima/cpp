/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:50:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/11 12:06:53 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap a("Ddmort");
    DiamondTrap b("Dcrawly");
    DiamondTrap c("Ddead");
    DiamondTrap d(a);

    a.attack("test"); 
    a.takeDamage(1);
    a.attack(b.getname());
    b.takeDamage(3);
    a.beRepaired(3);
    c.attack(b.getname());
    a.highFivesGuys();
    d.highFivesGuys();
    a.whoAmI();
    return (0);
}