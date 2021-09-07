/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:08:15 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/07 10:36:47 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>


class Fixed {
    private:
        int fixedPoint;
        static int const fractionalBits = 8;

    public:
        Fixed( void ); 
        Fixed( Fixed const & old_obj );
        Fixed & operator=( Fixed const & rhs );
        int getRawBits( void ) const;
        void setRawBits( int const raw ); 
        ~Fixed(void);
};