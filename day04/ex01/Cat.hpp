/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:53:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/16 09:59:11 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain *brain;
		
	public:
		Cat(void);
		Cat(Cat const &old_obj);
		Cat& operator=(Cat const &cat);
		virtual void makeSound(void) const;
		~Cat(void);
};

#endif