/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:29:52 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/14 16:04:57 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>
#include <string>

class WrongAnimal{
    
    protected:
        std::string type;
        
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &old_obj);
        WrongAnimal& operator=(WrongAnimal const &wrongAnimal);
        std::string getType(void) const;
        void makeSound(void) const;
        ~WrongAnimal(void);
};

#endif