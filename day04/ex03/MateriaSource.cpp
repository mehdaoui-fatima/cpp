/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:26:47 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/20 16:14:58 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource(void)
{
    this->index = 0;
}

MateriaSource::MateriaSource(MateriaSource const &materiaSource)
{
    *this = materiaSource;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &materiaSource)
{
    if (this != &materiaSource)
    {
        for(int i=0; i < 4; i++)
            this->inv[i] = materiaSource.inv[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* target)
{
    if (this->index < 4)
        this->inv[this->index++] = target;
    else
        std::cout << "array of Amateria is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    if(type.compare("cure") != 0 && type.compare("ice") != 0)
        return (0);
    for (int i = 0; i < 4; i++)
    {
        if (this->inv[i]->getType() == type)
            return this->inv[i];
    }
   return (0);
}

MateriaSource::~MateriaSource(){}