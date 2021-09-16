/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:46:17 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/16 18:58:43 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__ 
#define __CHARACTER__
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Character : public ICharacter{

    protected:
        std::string name;
        AMateria *m[4];
    
    public:
        Character(void);
        Character(std::string name);
        Character(Character const &character);
        Character& operator=(Character const &character);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, Character& target);
        ~Character() {}
};
#endif;