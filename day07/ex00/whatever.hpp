/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:41:06 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/04 11:12:32 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
T const& min(T const &x, T const &y)
{
    return ((x < y) ? x : y);
}

template <typename T>
T const& max(T const &x, T const &y)
{
    return ((x > y) ? x : y);
}

template<typename T>
void swap(T &x, T &y) 
{
    T tmp;

    tmp = x;
    x = y ;
    y = tmp;
}