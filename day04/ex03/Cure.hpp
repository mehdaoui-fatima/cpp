/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:03:41 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 13:33:51 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE__
#define __CURE__
#include "AMateria.hpp"

class Cure : public AMateria{

    public:
        Cure(void);
        Cure(Cure const & Cure);
        Cure& operator=(Cure const & cure);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure(void); 
};

#endif