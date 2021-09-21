/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:24:31 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 13:33:46 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
    this->type = "cure";
}

Cure::Cure(Cure const & cure)
{
    *this = cure;
}

Cure& Cure::operator=(Cure const & cure)
{
    cure.getType();
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria *cure = new Cure();
    return cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s ";
    std::cout << "wounds *" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Cure destructor called" << std::endl;
} 