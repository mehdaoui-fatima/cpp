/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:03:06 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 10:26:29 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat default constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = type;
}

WrongCat::WrongCat(WrongCat const &old_obj)
{
    std::cout << "WrongCat copy constructor" << std::endl;
    (*this) = old_obj;
}

WrongCat& WrongCat::operator=(WrongCat const &cat)
{
    std::cout << "WrongCat assignation operator called" << std::endl; 
    if(this != &cat)
        this->type = cat.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}
