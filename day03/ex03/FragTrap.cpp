/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:45:43 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/11 11:56:15 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "default constructor called! from FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 100;
    // this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap " <<this->name << " created"<< std::endl;
}

FragTrap::FragTrap(FragTrap const & old_obj)
{
    std::cout << "FragTrap: copy constructor called" << std::endl ;
    (*this) = old_obj;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " <<this->name << " attaks ";
    std::cout << target << " causing " << this->damage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FragTrap " <<this->name << " took ";
    std::cout << amount << " damage" << std::endl; 
}

void FragTrap::beRepaired(unsigned int amount)
{
     std::cout << "FragTrap " <<this->name << " is repaired" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives guys!" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor called from FragTrap" << std::endl;
}