/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:39:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/26 14:44:25 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    
  
    Bureaucrat *mat = nullptr;
    Form *form = nullptr;
    try 
    {
        mat = new Bureaucrat("mat", 10);
        form = new Form("QuizForm", 30, 1);
        mat->signForm(*form);
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl;
    }
    if (form != nullptr)
        std::cout << *form << std::endl;
    delete mat;
    delete form;


    Bureaucrat *pol = nullptr;
    Form *form_ = nullptr;
    try 
    {
        pol = new Bureaucrat("pol", 5);
        form_ = new Form("QuizForm", 1, 45);
        pol->signForm(*form_);
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl;
    }
    if (form_ != nullptr)
        std::cout << *form_ << std::endl;
    delete pol;
    delete form_;

    return (0);
}