/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 11:05:47 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/26 11:22:17 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    try {
        Bureaucrat b("mat", 1);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if(rrf != nullptr)
        {
            rrf->beSigned(b);
            rrf->execute(b);
        } 
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    return(0);
}