/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:56:57 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/29 15:09:57 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Karen {

private: 
   void  debug(void);
   void  info(void);
   void  warning(void);
   void error(void);

public:
    void complain(std::string level);
};

typedef void (Karen::*f)(void);