/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:29:56 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 10:32:04 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__
#define __BRAIN__
#include <iostream>
#include <string>

class Brain {
    
    public:
        std::string ideas[100];
    
    public:
        Brain(void);
        Brain(Brain const &brain);
        Brain& operator=(Brain const &brain);
        ~Brain(void);
};

#endif