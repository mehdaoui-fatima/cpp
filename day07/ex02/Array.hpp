/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:40:17 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/04 18:09:33 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array {
    
    private:
        T *tab;
        unsigned int len;
        
    public:
        Array(void){
           tab = new T[0];
        };

        Array(unsigned int n){
            tab = new T[n]();
			this->len = n;
        };
        
        Array(Array const& array){
			*this = array;
        };

        Array& operator=(Array const &array)
        {
			//delete[] tab;
			this->len = array.size();
			tab = new T[this->len];
			for(unsigned int i=0; i<this->len; i++)
				tab[i] = array.tab[i];
			return (*this);
        };

		class IndexOutOfRange : public std::exception {
            virtual const char* what() const throw(){
				return ("Index out of range");
			}
        };

		T& operator[](unsigned int index) const
		{
			if(index >= this->len)
				throw IndexOutOfRange();
			return tab[index];
		};

        unsigned int size(void) const
        {
            return this->len;
        };

		~Array(void){
			delete[] tab;
		};
};

#endif 