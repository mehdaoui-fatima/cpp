/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:48:01 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/06 13:55:43 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char	*Span::FullArrayException::what() const throw(){
    return ("Index out of range");
}

const char* Span::EmptyArrayException::what() const throw(){
	return ("Can't add nmbers no an empty array");
}

const char* Span::NoSpanException::what() const throw(){
	return ("No Span found");
}

Span::Span(void){
	return ;
}

Span::Span(unsigned int N){
	
	if (static_cast<int>(N) >= 0)
	{
		arr = new int[N]();
		this->index = 0;
		this->N = N;
	}
	else
		this->N = 0;
}

void Span::addNumber(int n){
	if (this->N == 0)
		throw EmptyArrayException();
	else if (index >= this->N)
		throw FullArrayException();
	else
		this->arr[index++] = n;
}

void Span::printSpan(void){
	for(unsigned int i = 0; i < this->index; i++)
		std::cout << this->arr[i] << '|';
	std::cout << std::endl;
}

// Span(Span const &span);
// Span operator=(Span const &span);

int Span::shortestSpan(){

	if(this->index == 0 || this->index == 1)
		throw NoSpanException();
	int *tmp = new int[index / 2];
	for (unsigned int i = 0; i < index/ 2; i++)
	{
		std::sort(arr, arr + index);
		tmp[i] =  arr[i + 1] - arr[i];
	}
	std::sort(tmp, tmp + (index/2));
	delete[] tmp;
	return (tmp[0]);
}

int Span::longestSpan(){
	if (this->index == 1 || this->index == 0)
		throw NoSpanException();
	else 
	{
		std::sort(arr, arr + this->index);
		return (arr[this->index - 1] -  arr[0]);
	}
}

Span::~Span(void)
{
	delete[] arr;
    return ;
}