/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:26:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/20 14:59:24 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE__
#define __MATERIASOURCE__
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    private:
        AMateria *inv[4];
        int index;

    public:
        MateriaSource(void);
        MateriaSource & operator=(MateriaSource const &materiaSource);
        MateriaSource(MateriaSource const &materiaSource);
        virtual void learnMateria(AMateria* target);
        virtual AMateria* createMateria(std::string const & type);
        ~MateriaSource();
};
#endif