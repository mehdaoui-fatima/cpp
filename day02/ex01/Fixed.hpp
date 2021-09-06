/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:21:14 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/01 16:51:09 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed {
        private:
        int fixedPoint;
        static int const fractionalBits = 8;

    public:
        Fixed(void);
        Fixed(int const value);
        Fixed(float fvalue);
        Fixed(Fixed const &old_obj);
        Fixed & operator=(Fixed const & rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw); 
        float toFloat( void ) const;
        int toInt( void ) const; 
        ~Fixed(void);
};


std::ostream & operator<<(std::ostream & o, Fixed const &rhs);

