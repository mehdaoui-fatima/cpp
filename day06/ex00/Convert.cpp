/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:21:07 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/29 12:20:52 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
    this->n = 0;
    this->d = 0.0;
    this->f = 0.0f;
}


void Convert::parseChar(std::string line)
{
    if (32 <= line[0] && line[0] < 127)
        this->c = line[0];
    this->n = (int)line[0];
}


void Convert::parse(std::string line)
{
    len = line.length();
    if (len == 1)
        parseChar(line);
    else 
        std::cout << line << std::endl;
}

char Convert::getchar(void) const
{
    return this->c;
}

int Convert::getint(void) const
{
    return this->n;
}

double Convert::getdouble(void) const
{
    return this->d;   
}

float Convert::getfloat(void) const
{
    return this->f;
}

std::ostream & operator<<(std::ostream & o, Convert const &rhs)
{
   o << "char: "   << rhs.getchar() << std::endl; 
   o << "int:  "   << rhs.getint() << std::endl; 
   o << "float:  " << rhs.getfloat() << std::endl; 
   o << "double: " << rhs.getdouble() << std::endl;
   
   return o;
}

Convert::~Convert(void)
{
    return ;
}