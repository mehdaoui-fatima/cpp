/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:01:18 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 13:52:47 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA__
#define __AMATERIA__
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
		
    public:
		AMateria(void);
        AMateria(std::string const &type);
		AMateria(AMateria const &materia);
		AMateria& operator=(AMateria const &mteria);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
		virtual ~AMateria(void);
};

#endif