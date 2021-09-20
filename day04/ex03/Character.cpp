/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:43:00 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/20 17:03:51 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    this->name = "";
    this->index = 0;
}

Character::Character(std::string name)
{
    this->name = name;
    this->index = 0;
}

Character::Character(Character const &character)
{
    *this = character;
}

Character& Character::operator=(Character const &character)
{
    if (this != &character)
    {
        this->name = character.name;
        for(int i = 0; i < 4; i++)
            this->inventory[i] = character.inventory[i];
    }  
    return (*this);
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    if (this->index > 3)
        std::cout << "Full inventory" << std::endl;
    else
        this->inventory[this->index++] = m;
   
}

void Character::unequip(int idx)
{
    int i;

    if (idx < 0  || idx >= this->index)
        std::cout << "index out of range!" << std::endl;
    else 
    {
        this->inventory[idx] =  NULL;
        for(i = idx; i < this->index; i++)
            inventory[i] = inventory[i + 1];
        this->index--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= index)
        std::cout << "index out of range!!" << std::endl;
    else
        this->inventory[idx]->use(target);
}

Character::~Character() {}