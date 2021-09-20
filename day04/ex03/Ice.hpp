/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:48:29 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/20 14:57:01 by fmehdaou         ###   ########.fr       */
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
        Ice* clone() const;
        void use(ICharacter& target);
        ~Ice(void); 
};

#endif