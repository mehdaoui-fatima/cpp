/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:36:43 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/07 18:54:11 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = value * pow(2, this->fractionalBits);
}

Fixed::Fixed(float fvalue)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = roundf(fvalue * pow(2, this->fractionalBits));
}

Fixed::Fixed( Fixed const &old_obj )
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = old_obj.fixedPoint;
}

int Fixed::getRawBits( void ) const
{
    return this->fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
    this->fixedPoint = raw;
}

Fixed& Fixed::operator=(Fixed const & rhs) 
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->fixedPoint = rhs.getRawBits();
    return *this;
}

float  Fixed::toFloat(void) const
{
    return ((float)this->fixedPoint / pow(2, this->fractionalBits));
}

int Fixed::toInt( void ) const
{
    return (this->fixedPoint / pow(2, this->fractionalBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
   o << rhs.toFloat();
   return o;
}

//++a
Fixed&  Fixed::operator++()
{
    this->fixedPoint++;
    return *this;
}

//a++
Fixed Fixed::operator++(int)
{
    Fixed  tmp = *this;
    ++(this->fixedPoint);
    return tmp;    
}

//a--
Fixed  Fixed::operator--(int)
{
    Fixed tmp = *this;
    --(this->fixedPoint);
    return tmp;
}

//--a
Fixed&  Fixed::operator--()
{
    this->fixedPoint--;
    return *this;
}

Fixed   Fixed::operator*(Fixed rhs) 
{
   return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator-(Fixed rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator/(Fixed rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed   Fixed::operator+(Fixed  rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    return (this->fixedPoint == rhs.fixedPoint);
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    return (this->fixedPoint != rhs.fixedPoint);
}

bool    Fixed::operator>(Fixed const &rhs) const
{
    return (this->fixedPoint > rhs.fixedPoint);
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return (this->fixedPoint < rhs.fixedPoint);
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return (this->fixedPoint >= rhs.fixedPoint);
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return (this->fixedPoint <= rhs.fixedPoint);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
       return a;
    return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
       return a;
    return (b);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}