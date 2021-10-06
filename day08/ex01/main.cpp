/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:42:37 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/06 13:56:58 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // Span sp = Span(5);
    // try {
    //      sp.addNumber(5);
    //     sp.addNumber(3);
    //     sp.addNumber(17);
    //     sp.addNumber(9);
    //     sp.addNumber(11);
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    // } catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

   
    Span spempty(10000);
    try {
        std::cout << spempty.shortestSpan() << std::endl;
        // std::cout << spempty.longestSpan() << std::endl;
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }



   return (0); 
}