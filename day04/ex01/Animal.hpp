/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:29:52 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/16 10:26:13 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <iostream>
#include <string>

class Animal{

    protected:
        std::string type;

    public:
        Animal(void);
        Animal(Animal const &old_obj);
        Animal& operator=(Animal const &animal);
        std::string getType(void) const;
        virtual void makeSound(void) const;
        virtual ~Animal(void);
};

#endif