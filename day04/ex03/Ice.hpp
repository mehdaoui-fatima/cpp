/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:48:29 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 13:34:10 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE__
#define __ICE__
#include "AMateria.hpp"

class Ice : public AMateria{

    public:
        Ice(void);
        Ice(Ice const & ice);
        Ice& operator=(Ice const & ice);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Ice(void); 
};

#endif