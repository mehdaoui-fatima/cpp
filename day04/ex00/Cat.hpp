/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:53:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/14 15:30:22 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal {

        public:
        Cat(void);
        Cat(std::string type);
        Cat(Cat const &old_obj);
        Cat& operator=(Cat const &cat);
        virtual void makeSound(void) const;
        ~Cat(void);
};

#endif