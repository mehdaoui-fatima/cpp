/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:43:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/07 14:03:08 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>


class Span {
    
    private:
        std::vector<int> _v;
        unsigned int _N;
        Span(void);
        
    public:
        class SizeNotAllowedException : public std::exception{
            virtual const char *what() const throw();
        };
        class FullVectorException : public std::exception{
            virtual const char *what() const throw();
        };
        class NoSpanException : public std::exception{
            virtual const char *what() const throw();
        };
        Span(unsigned int N);
        Span(Span const &span);
        Span operator=(Span const &span);
        void addNumber(const int &n);
        template <typename Iter>
        void addNumber(Iter begin, Iter end)
        {
            if (end - begin + this->_v.size() > this->_N)
                throw FullVectorException();
            this->_v.insert(this->_v.end() , begin, end);
        }
        int shortestSpan();
        int longestSpan(void);
        void printSpan(void);
        ~Span(void);
};


#endif 

