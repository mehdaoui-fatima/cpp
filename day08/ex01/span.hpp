/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:43:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/06 13:29:53 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include<iostream>
#include<string>
#include<algorithm>

class Span {
    
    private:
        int *arr;
        unsigned int N;
        unsigned int index;
        Span(void);
        
    public:
        class FullArrayException : public std::exception{
            virtual const char *what() const throw();
        };
        class EmptyArrayException : public std::exception{
            virtual const char *what() const throw();
        };
        class NoSpanException : public std::exception{
            virtual const char *what() const throw();
        };
        Span(unsigned int N);
        Span(Span const &span);
        Span operator=(Span const &span);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void printSpan(void);
        ~Span(void);
};


#endif 

