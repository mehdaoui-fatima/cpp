/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:31:14 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/10 16:55:50 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    std::cout << "Default constructor called, from ClapTrap" << std::endl;  
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name + "_clap_name"; //REVIEW
    this->hitpoints = 10;
    this->energy = 10;
    this->damage = 0;
    std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const  &old_obj)
{
    std::cout << "ClapTrap: copy constructor called" << std::endl;
    (*this) = old_obj; 
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->hitpoints = rhs.hitpoints;
        this->energy = rhs.energy;
        this->damage = rhs.damage; 
    }
    return (*this);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " took ";
    std::cout << amount << " damage" << std::endl; 
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->name << " attack ";
    std::cout << target << ", causing ";
    std::cout << this->damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " is repaired" << std::endl;
}

std::string ClapTrap::getname(void)
{
    return this->name;
}

unsigned int ClapTrap::gethitpoints(void)
{
    return this->hitpoints;
}

unsigned int ClapTrap::getenergy(void)
{
    return this->energy;
}

unsigned int ClapTrap::getdamage(void)
{
    return this->damage;
}

ClapTrap::~ClapTrap(void){
    
    std::cout << "destructor called from ClapTrap" << std::endl;
    return ;
}