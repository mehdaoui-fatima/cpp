/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:36:43 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/05 13:52:47 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

//default constractor
Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}

// constractor to convert int to fixed(8)
Fixed::Fixed(int const value)
{
    // std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = value * pow(2, 8);
}

// constractor to convert floating point to fixed(8)
Fixed::Fixed(float fvalue)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = roundf(fvalue * pow(2, fractionalBits));
}

//copy constractor
Fixed::Fixed( Fixed const &old_obj )
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}


//getter 
int Fixed::getRawBits( void ) const
{
    return this->fixedPoint;
}

//setter 
void Fixed::setRawBits( int const raw )
{
    this->fixedPoint = raw;
}

// Assignation operator 
Fixed& Fixed::operator=(Fixed const & rhs) 
{
    // std::cout << "Assignation operator called" << std::endl;
    this->fixedPoint = rhs.getRawBits();
    return *this;
}

//fct to convert fixed point value to floating point
float  Fixed::toFloat(void) const
{
    return (this->fixedPoint / pow(2, 8));
}

int Fixed::toInt( void ) const
{
    return (this->fixedPoint / pow(2, 8));
}

//<<
std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
   o << rhs.toFloat();
   return o;
}


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

Fixed   Fixed::operator*(Fixed rhs) 
{
   return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator-(Fixed &rhs) const
{
 return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator/(Fixed &rhs) const
{
 return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed   Fixed::operator+(Fixed  &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
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
    return (this->fixedPoint <rhs.fixedPoint);
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return (this->fixedPoint >= rhs.fixedPoint);
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return (this->fixedPoint >= rhs.fixedPoint);
}



Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.fixedPoint > b.fixedPoint)
       return a;
    return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.fixedPoint < b.fixedPoint)
       return a;
    return (b);
}



//destructor
Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
    return ;
}