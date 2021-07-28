/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:56:23 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/28 14:35:48 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int main()
{
    Karen karen;
    
    karen.complain("info");
    karen.complain("debug");
    karen.complain("warning");
    karen.complain("error");
}