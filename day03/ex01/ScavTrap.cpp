/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:22:34 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/09 18:14:56 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void)
{
    std::cout << "default constructor called! from ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
   
    std::cout << "ScavTrap " << name << " created"<< std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << getname() << " attaks ";
    std::cout << target << " causing " << getdamage() << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << getname() << " took ";
    std::cout << amount << " damage" << std::endl; 
}

void ScavTrap::beRepaired(unsigned int amount)
{
     std::cout << "ScapTrap " << getname() << " is repaired" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getname();
    std::cout << " have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor called from ScavTrap" << std::endl;
}