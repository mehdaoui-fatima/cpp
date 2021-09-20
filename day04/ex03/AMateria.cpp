/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:01:57 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/20 16:18:10 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::AMateria(AMateria const &materia)
{
    *this = materia;
}

AMateria& AMateria::operator=(AMateria const &materia)
{
    if (this != &materia)
        this->type = materia.type;
    return (*this);
}

std::string const& AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << target.getName() << std::endl;
}

AMateria::~AMateria(void){}