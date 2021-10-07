/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:27:14 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/07 10:51:03 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <vector>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T> {

        public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin(){
            return std::stack<T>::c.begin();
        }
        
        const_iterator begin() const {
            return std::stack<T>::c.begin();
        }

        reverse_iterator rbegin() {
            return std::stack<T>::c.rbegin();
        }
        
        const_reverse_iterator rbegin() const {
            return std::stack<T>::c.rbegin();
        }

        iterator end(){
            return std::stack<T>::c.end();
        }

        const_iterator end() const{
            return std::stack<T>::c.end();
        }

        reverse_iterator rend(){
            return std::stack<T>::c.rend();
        }

        const_reverse_iterator rend() const{
            return std::stack<T>::c.rend();
        }
};
#endif
