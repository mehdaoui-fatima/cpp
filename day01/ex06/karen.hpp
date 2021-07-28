/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 18:53:36 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/28 20:19:38 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Karen{   

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
public:
    void complain(int level); 
};