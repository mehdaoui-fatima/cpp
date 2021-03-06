/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:50:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/11 10:58:10 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
    FragTrap a("Fmort");
    FragTrap b("Fcrawly");
    FragTrap c("Fdead");
    FragTrap d(a);

    b.attack(a.getname()); 
    a.attack(b.getname());
    b.takeDamage(3);
    a.takeDamage(1);
    a.beRepaired(3);
    c.attack(b.getname());
    a.highFivesGuys();
    d.highFivesGuys();
    return (0);
}