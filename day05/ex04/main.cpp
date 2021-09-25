/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:20:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/25 17:18:50 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{


    /*pol can sign but cannot execute [138, 146] */
    /* pol cannot sign [146, 150] */
    /* pol can sign and can execute [1, 137] */
    try{
        Bureaucrat mat("mat", 137);
        ShrubberyCreationForm shrubbery("home");
        mat.signForm(shrubbery);
        mat.executeForm(shrubbery);
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    /*pol can sign but cannot execute [46, 72] */
    /* pol cannot sign [73, 150] */
    /* pol can sign and can execute [1,45] */
    try{
        Bureaucrat pol("pol", 73);
        RobotomyRequestForm rebotomy("wall");
        pol.signForm(rebotomy);
        pol.executeForm(rebotomy);
        std::cout << rebotomy << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    /*pol can sign but cannot execute [6, 25] */
    /* pol cannot sign [26, 150] */
    /* pol can sign and can execute [1,5] */
    try {
        Bureaucrat pardon("pardon", 1);
        PresidentialPardonForm shrubbery("sam");
        pardon.signForm(shrubbery);
        pardon.executeForm(shrubbery);
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
 
    

 

    return (0);
}