/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:22:34 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/11 10:33:33 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "Default constructor called! from ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "ScavTrap " <<this->name << " created"<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &old_obj)
{
    std::cout << "ScavTrap: copy constructor called" << std::endl ;
    (*this) = old_obj;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
    {   
        this->name = rhs.name;
        this->hitpoints = rhs.hitpoints;
        this->energy = rhs.energy;
        this->damage = rhs.damage;
    }
    return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " <<this->name << " attaks ";
    std::cout << target << " causing " << this->damage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " <<this->name << " took ";
    std::cout << amount << " damage" << std::endl; 
}

void ScavTrap::beRepaired(unsigned int amount)
{
     std::cout << "ScavTrap " <<this->name << " is repaired" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->name;
    std::cout << " have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor called from ScavTrap" << std::endl;
}