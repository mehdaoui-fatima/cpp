/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:04:57 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/14 15:29:40 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor" << std::endl;
    this->type = "Dog";
}

Dog::Dog(std::string type)
{
    std::cout << "Constructor called" << std::endl;
    this->type = type;
}

Dog::Dog(Dog const &old_obj)
{
    std::cout << "Copy constructor" << std::endl;
    (*this) = old_obj;
}

Dog& Dog::operator=(Dog const &dog)
{
    std::cout << "Assignation operator called" << std::endl; 
    if(this != &dog)
        this->type = dog.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Destructor called" << std::endl;
}