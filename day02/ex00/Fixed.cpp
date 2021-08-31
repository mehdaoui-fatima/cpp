/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:08:08 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/08/31 16:31:10 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


//default constractor
Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}



//copy constractor
Fixed::Fixed( Fixed const &old_obj )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}


//getter 
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPoint;
}

//setter 
void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPoint = raw;
}

// Assignation operator 
Fixed& Fixed::operator=(Fixed const & rhs) 
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixedPoint = rhs.getRawBits();
    return *this;
}

//destructor
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}