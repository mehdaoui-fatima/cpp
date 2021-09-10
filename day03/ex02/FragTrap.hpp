/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:45:41 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/10 11:53:59 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &old_obj);
        FragTrap & operator=(FragTrap const &rhs);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void highFivesGuys(void);
        ~FragTrap(void);
};

#endif