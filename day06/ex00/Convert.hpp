/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:21:02 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/30 17:45:36 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT__HPP
#define __CONVERT__HPP
#include <iostream>
#include <string>
#include <limits>

typedef std::numeric_limits< double > dbl;

class Convert {

    public:
        std::string type;
        bool impossible;
        bool isPrint;
        int len;
        int n;
        double d;
        float f;
        char c;
        double precision;
    
        
        
    public:
        Convert(void);
        // Convert(Convert const &convert);
        // Convert& operator=(Convert const &convert);
        void defineType(std::string line);
        std::string getType(void);
        void convert(std::string line);
        void printConverted(void);
        void printChar(void);
        void printInt(void);
        // int isFloat(std::string line);


        ~Convert(void);
};


#endif