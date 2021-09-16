/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:01:57 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/16 18:44:42 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "Default AMateria constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(AMateria const &materia)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = materia;
}

AMateria& AMateria::operator=(AMateria const &materia)
{
    std::cout << "Amateria assignment operator called" << std::endl;
    if (this != &materia)
        this->type = materia.type;
    return (*this);
}

std::string const& AMateria::getType() const
{
    return this->type;
}

//REVIEW check the display of the fucntion 
void AMateria::use(ICharacter& target)
{
    std::cout << target.getName() << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
}