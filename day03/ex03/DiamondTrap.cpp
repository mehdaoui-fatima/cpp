/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:01:43 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/11 12:03:40 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "Default constractor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap("FragTrap"), ScavTrap("ScavTrap")
{
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hitpoints = FragTrap::hitpoints;
    this->energy = DiamondTrap::energy;
    this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &old_obj)
{
    std::cout << "Assignation operator called" << std::endl;
    (*this) = old_obj;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->hitpoints = rhs.hitpoints;
        this->energy = rhs.energy;
        this->damage = rhs.damage;
    }
    return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    std::cout << "DiamondTrap " <<this->name << " took ";
    std::cout << amount << " damage" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    std::cout << "DiamondTrap " <<this->name << " is repaired" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << this->name;
    std::cout << " has a clapTrap with the name " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Diamondtrap Destractor called" << std::endl;
    return ;
}