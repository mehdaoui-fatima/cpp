/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:31:47 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/07 13:29:35 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include<iostream>
#include<iterator>
#include<vector>

class NovalueFoundException : public std::exception {
	virtual const char *what() const throw(){
		return "No matched value found";
	}
};

template<typename T>
void easyfind(T ar, int const &n)
{
	if (std::find(ar.begin(), ar.end(), n) != ar.end())
		std::cout << "value found" << std::endl;
	else
		throw NovalueFoundException();
}

#endif
