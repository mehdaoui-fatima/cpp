/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:08:53 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/02 09:35:58 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>

int main()
{
    Base *pointer;
    Base *reference;

    pointer = generate();
    identify(pointer);  
    reference = generate();
    identify(*reference);
    
    return (0);
}