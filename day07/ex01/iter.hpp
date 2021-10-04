/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:16:31 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/04 13:27:47 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER__HPP
#define __ITER__HPP

#include <iostream>
#include <string>

template<typename T>
void print(T const &n)
{
    std::cout << n << '|';
}

template <typename T>
void	iter(T *tab, int len, void func(T const &n))
{
	for (int i = 0; i < len; i++)
	{
		func(tab[i]);
	}
}


#endif