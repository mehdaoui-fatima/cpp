/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:29:34 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/14 15:29:32 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor"<< std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Constractor called!" << std::endl;
    this->type = type;
}

Animal::Animal(Animal const &old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    (*this) = old_obj;
}

Animal& Animal::operator=(Animal const &animal)
{
    std::cout << "Assignation operator called!" << std::endl;
    if (this != &animal)
        this->type = animal.type;
    return *this;
}

std::string  Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Destructor called" << std::cout;
}

