/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:48:19 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/16 18:46:21 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void)
{
    std::cout << "Default Ice constructor called" << std::endl;
    this->type = "ice";
}

Ice::Ice(Ice const & ice)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = ice;
}

Ice& Ice::operator=(Ice const & ice)
{
    std::cout << "Ice assignment operator called" << std::endl;
    if (this != &ice)
        this->type = ice.type;
    return (*this);
}

Ice* Ice::clone() const
{
    Ice *ice = new Ice;
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