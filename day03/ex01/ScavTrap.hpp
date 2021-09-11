/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:30:16 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/11 10:44:21 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap 
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &old_obj);
        ScavTrap & operator=(ScavTrap const &rhs);
        void guardGate(void);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ScavTrap(void);
};

#endif