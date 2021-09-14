/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:29:34 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/14 15:29:32 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal default constructor"<< std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "Constractor called!" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    (*this) = old_obj;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &wrongAnimal)
{
    std::cout << "Assignation operator called!" << std::endl;
    if (this != &wrongAnimal)
        this->type = wrongAnimal.type;
    return *this;
}

std::string  WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Destructor called" << std::cout;
}

