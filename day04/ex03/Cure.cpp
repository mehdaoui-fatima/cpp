/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:24:31 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/16 18:45:41 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(void)
{
    std::cout << "Default cure constructor called" << std::endl;
    this->type = "Cure";
}

Cure::Cure(Cure const & cure)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = cure;
}

Cure& Cure::operator=(Cure const & cure)
{
    std::cout << "Cure assignment operator called" << std::endl;
    if (this != &cure)
        this->type = cure.type;
    return (*this);
}

Cure* Cure::clone() const
{
    Cure *cure = new Cure;
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