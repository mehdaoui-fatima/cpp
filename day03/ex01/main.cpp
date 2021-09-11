/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:50:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/11 10:39:10 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Smort");
    ScavTrap b("Scrawly");
    ScavTrap c("Sdead");
    ScavTrap d(a);

    b.attack(a.getname()); 
    a.attack(b.getname());
    c.attack(b.getname());
    b.takeDamage(8);
    a.takeDamage(2);
    a.beRepaired(8);
    a.guardGate();
    d.guardGate();
    return (0);
}