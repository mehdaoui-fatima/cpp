/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:43:00 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/16 19:08:40 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    std::cout << "Character default constructor called" << std::endl;
    this->name = "";
    for(int i = 0; i < 4; i++)
        this->m[i] =  NULL;
}

Character::Character(std::string name)
{
    std::cout << "Character constructor called" << std::endl;
    this->name = name;
    for(int i = 0; i < 4; i++)
        this->m[i] =  NULL;
}

Character::Character(Character const &character)
{
     std::cout << "Character copy constructor called" << std::endl;
     *this = character;
}

Character& Character::operator=(Character const &character)
{
    std::cout << "Character assignment operator called" << std::endl;
    if (this != &character)
        this->name = name;
    return (*this);
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->m[i] == NULL)
        {
            this->m[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    int i;

    if (idx < 0 || idx > 3)
    {
         std::cout << "index out of range!" << std::endl;
         return ;
    }
    this->m[idx] =  NULL;
    for(i = idx; i < 3; i++)
        m[i] = m[i + 1];
    m[i] = NULL;
}

void Character::use(int idx, Character& target)
{
    this->m[idx]->use(target);
}


Character::~Character() {

}