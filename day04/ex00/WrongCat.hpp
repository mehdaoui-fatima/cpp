/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:53:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/14 16:03:47 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	public:
	WrongCat(void);
	WrongCat(std::string type);
	WrongCat(WrongCat const &old_obj);
	WrongCat& operator=(WrongCat const &cat);
	void makeSound(void) const;
	~WrongCat(void);
};

#endif