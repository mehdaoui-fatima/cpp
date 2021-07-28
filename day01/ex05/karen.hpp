/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 11:31:20 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/28 14:33:45 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Karen{   

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain(std::string level);
};