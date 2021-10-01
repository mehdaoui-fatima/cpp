/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:21:02 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/01 15:14:07 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT__HPP
#define __CONVERT__HPP
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

class Convert {

    public:
        std::string type;
        bool impossible;
        bool infi;
        int len;
        int n;
        double d;
        float f;
        char c;
        double precision;
        
    public:
        Convert(void);
        Convert(Convert const &convert);
        Convert& operator=(Convert const &convert);
        void defineType(std::string line);
        std::string getType(void);
        void convert(const char *line);
        void printConverted();
        void printChar();
        void printInt();
        void printFloat();
        void printDouble();
        ~Convert(void);
};


#endif