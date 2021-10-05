/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:48:01 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/05 17:56:13 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


Span::Span(void)
{
    return ;
}

Span::Span(unsigned int N)
{
    arr = new int[N];
}

// Span(Span const &span);
// Span operator=(Span const &span);





Span::~Span(void)
{
    return ;
}