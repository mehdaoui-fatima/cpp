/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:48:01 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/07 08:16:06 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

const char* Span::SizeNotAllowedException::what() const throw(){
	return ("the size should be positive");
}

const char* Span::NoSpanException::what() const throw(){
	return ("No Span found");
}
const char* Span::FullVectorException::what() const throw(){
	return ("Size limit reached");
}

Span::Span(void){
	return ;
}

//NOTE: only pos n accepted
Span::Span(unsigned int N)
{
	if (static_cast<int>(N) < 0)
		throw SizeNotAllowedException();
	this->_N = N;
}

void Span::addNumber(const int &n)
{
	if (this->_v.size()  + 1 > this->_N)
		throw FullVectorException();
	this->_v.push_back(n);
}

int Span::longestSpan(void)
{
	if (this->_v.size() < 2)
		throw NoSpanException();
	return 
		(*std::max_element(_v.begin(), _v.end()) -
			 *std::min_element(_v.begin(), _v.end()));
}

int Span::shortestSpan(void)
{
	size_t min = INT_MAX;
	size_t x = 0;
	if (this->_v.size() < 2)
		throw NoSpanException();
	std::sort(this->_v.begin(), this->_v.end());
	for(size_t i = 0; i < _v.size() - 1; i++)
	{
		x = _v[i + 1] - _v[i];
		if ( x < min)
			min = x;
	}	
	return (min);
}

Span::Span(Span const &span)
{
	(*this) = span;
}

Span Span::operator=(Span const &span)
{
	if(this != &span)
	{
		this->_N = span._N;
		this->_v = span._v;
	}
	return (*this);
}


void Span::printSpan(void)
{
	std::vector<int>::iterator iter;
	for (size_t i=0; i < _v.size(); i++)
		std::cout << _v[i] << " | ";
	std::cout << std::endl;
}

Span::~Span(void)
{
	return ;
}