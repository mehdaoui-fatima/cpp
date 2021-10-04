/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:16:31 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/04 18:02:45 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template<typename T>
void print_(T const &n)
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