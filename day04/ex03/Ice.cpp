/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:48:19 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 13:35:18 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void)
{
    this->type = "ice";
}

Ice::Ice(Ice const & ice)
{
    *this = ice;
}

Ice& Ice::operator=(Ice const & ice)
{
    ice.getType();
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria *ice = new Ice();
    return ice;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at ";
    std::cout << target.getName() << " *" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << "Ice destructor called" << std::endl;
} 