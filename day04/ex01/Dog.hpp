/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:59:30 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/16 10:18:31 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal {

    private:
        Brain *brain;

    public:
        Dog(void);
        Dog(Dog const &old_obj);
        Dog& operator=(Dog const &dog);
        virtual void makeSound(void) const;
        ~Dog(void);
};

#endif