/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:50:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/10 11:53:38 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
    FragTrap a("Smort");
    FragTrap b("Scrawly");
    FragTrap c("Sdead");
    FragTrap d(a);

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