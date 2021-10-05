/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:43:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/05 17:58:14 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include<iostream>
#include<string>

class Span {
    
    private:
        int *arr;
        unsigned int index;
        
    public:
        Span(void);
        Span(unsigned int N);
        Span(Span const &span);
        Span operator=(Span const &span);


        void addNumber(int n);
        // shortestSpan
        //longestSpan
        //exceptions

        ~Span(void);
};
#endif 
