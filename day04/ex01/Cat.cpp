/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:53:47 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/16 10:17:32 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat default constructor" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const &old_obj)
{
    std::cout << "Cat copy constructor" << std::endl;
    (*this) = old_obj;
}

Cat& Cat::operator=(Cat const &cat)
{
    std::cout << "Cat sssignation operator called" << std::endl; 
    if(this != &cat)
    {
        this->brain = new Brain();
        this->type = cat.type;
        *(this->brain) = *(cat.brain);
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}
