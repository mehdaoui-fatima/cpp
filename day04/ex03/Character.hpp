/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:46:17 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 13:44:57 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__ 
#define __CHARACTER__
#include "AMateria.hpp"


class Character : public ICharacter{

    protected:
        std::string name;
        AMateria *inventory[4];
        int index;
    
    public:
        Character(void);
        Character(std::string name);
        Character(Character const &character);
        Character& operator=(Character const &character);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        ~Character();
};
#endif