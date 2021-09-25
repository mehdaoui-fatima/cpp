/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:39:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/24 16:25:06 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    try {
        Bureaucrat mat("mat", 10);
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat mat("mat", 45);
        for (int i = mat.getGrade(); i < 151; i++)
        {
            mat.decrement();
            std::cout << "Bureaucrat grade :" <<  mat.getGrade() << std::endl;
        }
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat pol("pol", 45);
        for (int i = pol.getGrade(); i > 0; i--)
        {
            pol.increment();
            std::cout << "Bureaucrat grade :" <<  pol.getGrade() << std::endl;
        }
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}