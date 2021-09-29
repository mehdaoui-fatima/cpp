/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:21:02 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/29 12:20:52 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT__HPP
#define __CONVERT__HPP
#include <iostream>
#include <string>

class Convert {

    public:
        int n;
        double d;
        char c;
        float f;
        int len;
        
    public:
        Convert(void);
        // Convert(Convert const &convert);
        // Convert& operator=(Convert const &convert);
        void parse(std::string line);
        void parseChar(std::string line);




        char getchar(void) const;
        int getint(void) const;
        double getdouble(void) const;
        float getfloat(void) const;
        ~Convert(void);
};

std::ostream & operator<<(std::ostream & o, Convert const &rhs);

#endif