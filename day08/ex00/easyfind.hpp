/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:31:47 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/05 13:01:54 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include<iostream>
#include<iterator>
#include<vector>

//NOTE assume that the T is a container of int 
template<typename T>
int easyfind(T *ar, int n)
{
    T::iterator iter;
    for(iter = ar.begin(); iter < ar.end; iter++)
    {
        if (*iter == n)
            return *iter;
    }
    return (-1);
}

#endif
 /* EASYFIND_HPP */
