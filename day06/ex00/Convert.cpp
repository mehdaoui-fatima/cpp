/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:21:07 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/30 17:55:08 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
    this->impossible = 0;
    this->isPrint = 1;
    return;
}

std::string Convert::getType(void)
{
    return this->type;
}

void    Convert::printChar(void)
{
    if (this->impossible)
        std::cout << "char: impossible" << std::endl;
    else if (this->isPrint)
        std::cout << "char: " << this->c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void    Convert::printInt(void)
{
    if (this->impossible)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << this->n << std::endl;
}

void Convert::printConverted(void)
{
    printChar();
    printInt();
    std::cout.precision((this->precision > 0) ? this->precision : 1);
    std::cout << "float: " << std::fixed << this->f << "f" << std::endl;
    std::cout << "double: " << std::fixed << this->d << std::endl;
}


void Convert::convert(std::string line)
{
    if (this-> type == "invalidType")
        return ;
    else if (this->type == "char")
    {
        this->c = static_cast<char>(line[0]);
        this->d = static_cast<double>(line[0]);
        this->f = static_cast<float>(line[0]);
        this->n = static_cast<int>(line[0]);
    }
    else if (this->type == "int")
    {
        try {
            /* converting a large number to int causes overflow 
            //that raised the exception */
            this->n = std::stoi(line);
        }catch(std::exception &e)
        {
            this->impossible = 1;
            return ;
        }
        this->c = static_cast<char>(this->n);
        this->d = static_cast<double>(this->n);
        this->f = static_cast<float>(this->n);
        if (!isprint(this->n))
            this->isPrint = 0;
    }



}


void Convert::defineType(std::string line)
{
    int index = 0;
    len = line.length();

    if (line == "-inff" || line == "+inff" || line == "nanf")
    {
        this->type = "flaot";
        this->impossible = 1;
        return ;
    }
    if (line == "-inf" || line == "+inf" || line == "nan")
    {
        this->type = "double";
        this->impossible = 1;
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
            this->precision = (this->len - i - 1);
        }
        else if (type == "double" && i == (len - 1 )&& line[i] == 'f')
            this->type = "float";
        else if (!isnumber(line[i]))
        {
            this->type = "invalidType";
            break ;
        }
    }
}
    
Convert::~Convert(void)
{
    return ;
}