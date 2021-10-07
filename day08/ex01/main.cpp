/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:42:37 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/07 13:53:30 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    // try {
    //     std::vector<int> src;
    //     srand(time(0));
    //     for(size_t i = 0; i < 10; i++)
    //     {   
    //         int x = rand() % 100 + i;
    //         // std::cout << x << " | ";
    //         src.push_back(x); 
    //     }
    //     // std::cout << std::endl;
    //     Span sp = Span(10);
    //     sp.addNumber(src.begin(), src.end());
    //     // sp.printSpan();
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    // } catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    try {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
   return (0);
}