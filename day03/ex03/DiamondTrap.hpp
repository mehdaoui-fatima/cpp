/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:01:44 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/10 18:35:29 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__
#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


//REVIEW check if you need to overridde guidGuard nd highfives func
class DiamondTrap : public FragTrap, public ScavTrap {

    private:
        std::string name;
    
    public: 
        DiamondTrap(void); 
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &DiamondTrap);
        DiamondTrap& operator=(DiamondTrap const &DiamondTrap);
        void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        void whoAmI();
        ~DiamondTrap(void);
};

#endif