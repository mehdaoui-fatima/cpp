/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:30:16 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/09 18:03:34 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
#include <iostream>
#include <string>
#include "../ex00/ClapTrap.hpp"

//REVIEW pay attention to the canonical form !!

class ScavTrap : public ClapTrap 
{

    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        void guardGate();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ScavTrap(void);
};

#endif