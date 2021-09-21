/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:30:12 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 10:42:52 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(Brain const &brain)
{
    std::cout << "Brain copy constructor" << std::endl;
    (*this) = brain;
}

Brain& Brain::operator=(Brain const &brain)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &brain)
    {
        for (size_t i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}