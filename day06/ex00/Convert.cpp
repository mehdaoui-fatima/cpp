/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:21:07 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/01 15:30:23 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
    this->impossible = 0;
    this->infi = 0;
    return;
}

std::string Convert::getType(void)
{
    return this->type;
}

Convert::Convert(Convert const &convert)
{
    *this = convert;
}

Convert& Convert::operator=(Convert const &convert)
{
    if (this != &convert)
    {
        this->type = convert.type;
        this->impossible = convert.impossible;
        this->infi = convert.infi;
        this->len = convert.len;
        this->n = convert.n;
        this->d = convert.d;
        this->f = convert.f;
        this->c = convert.c;
        this->precision = convert.precision;
    }
    return (*this);
}

void    Convert::printChar()
{
    if (this->impossible || this->n > 127 || this->n < 0)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(this->c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << "'" << this->c << "'" << std::endl;
}

void    Convert::printInt()
{
    if (this->n == INT_MIN || this->impossible)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << this->n << std::endl;
}

void Convert::printFloat()
{
    std::cout << "float: " << std::fixed << std::setprecision((this->precision)) \
    << this->f << "f" <<std::endl;
}

void    Convert::printDouble()
{
    std::cout << "double: " << std::fixed << std::setprecision((this->precision)) \
    << this->f  <<std::endl;
}

void Convert::printConverted()
{
    
    if(type == "invalidType")
        return ;
    printChar();
    printInt();
    printFloat();
    printDouble();
}

void Convert::convert(const char *line)
{
    if (this-> type == "invalidType")
         return ;
    double x = atof(line);
    if (this->infi)
    {
        this->d = static_cast<double>(x);
        this->f = static_cast<float>(x);
    }
    else if (this->type == "char")
    {
        this->c = static_cast<char>(line[0]);
        this->d = static_cast<double>(line[0]);
        this->f = static_cast<float>(line[0]);
        this->n = static_cast<int>(line[0]);
    }
    else if (this->type == "int")
    {
        this->n = static_cast<int>(x);
        this->c = static_cast<char>(x);
        this->d = static_cast<double>(x);
        this->f = static_cast<float>(x);
    }
    else if (this->type == "float")
    {
        this->n = static_cast<int>(x);
        this->c = static_cast<char>(x);
        this->d = static_cast<double>(x);
        this->f = static_cast<float>(x);
    }
    else if (this->type == "double")
    {
        this->n = static_cast<int>(x);
        this->c = static_cast<char>(x);
        this->f = static_cast<float>(x);
        this->d = x;
    }
}

void Convert::defineType(std::string line)
{
    int index = 0;
    len = line.length();
    int sp_index;
    if (line == "-inff" || line == "+inff" || line == "nanf")
    {
        this->type = "flaot";
        this->infi = 1;
        this->impossible = 1;
        return ;
    }
    if (line == "-inf" || line == "+inf" || line == "nan")
    {
        this->type = "double";
        this->impossible = 1;
        this->infi = 1;
        return ;
    }
    else if (len == 1 && !isnumber(line[0]))
    {
         this->type = "char";
         return ;
    }
    else if (line[0] == '+' || line[0] == '-')
        index++;
    this->type = "int";
    for (int i = index; i < len; i++)
    {
        if (line[i] == '.' && this->type != "double")
        {
            this->type = "double";
            sp_index = i;
        }
        else if (type == "double" && i == (len - 1) && line[i] == 'f')
        {
            this->type = "float";
        }
        else if (!isnumber(line[i]))
        {
            this->type = "invalidType";
            break ;
        }
    }
    if(this->type == "double" || this->type == "float")
    {
        this->precision = line.size() - sp_index - (this->type == "float" ? 2 : 1);
        std::cout << this->precision << std::endl;
    }
    if(this->precision == 0)
        this->precision = 1;
}
    
Convert::~Convert(void)
{
    return ;
}