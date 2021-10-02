/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:14:49 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/02 09:08:37 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE__HPP
#define __BASE__HPP
#include <iostream>
#include <string.h>

class Base {
    
    public:
        virtual ~Base(){};

};
class BaseA : public Base {};
class BaseB : public Base {};
class BaseC : public Base {};
Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif