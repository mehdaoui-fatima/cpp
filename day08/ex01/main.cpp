/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:42:37 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/06 18:44:05 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // try {
    //     std::vector<int> src;
    //     srand(time(0));
    //     for(size_t i = 0; i < 100; i++)
    //     {   
    //         int x = rand() % 1000000;
    //         std::cout << x << " | ";
    //         src.push_back(x); 
    //     }
    //     std::cout << std::endl;
    //     Span sp = Span(100);
    //     sp.addNumber(src.begin(), src.end());
    //     sp.printSpan();
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    // } catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    // Span spempty(10000);
    // try {
    //     spempty.addNumber(158);
    //     spempty.addNumber(1);
    //     spempty.addNumber(2);
    //     std::cout << spempty.shortestSpan() << std::endl;
    //     std::cout << spempty.longestSpan() << std::endl;
    // }catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
   return (0); 
}