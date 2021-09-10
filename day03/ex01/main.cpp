/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:50:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/10 11:34:51 by fmehdaou         ###   ########.fr       */
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
    a.takeDamage(2);
    a.attack(b.getname());
    b.takeDamage(8);
    a.beRepaired(8);
    c.attack(b.getname());
    a.guardGate();
    d.guardGate();
    return (0);
}