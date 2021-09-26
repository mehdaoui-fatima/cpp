/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:37:03 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/26 15:59:53 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
Form("RobotmyRequestForm", 72, 45)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
Form("RobotmyRequestForm", 72, 45)
{
    this->_target = target;   
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &r) :
Form(r.getName(), r.getGradeSign(), getGradeExecute())
{
    *this = r;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &r)
{
    if (this != &r)
        this->_target =  r._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
        throw Bureaucrat::GradeTooLowException();
    if (!this->getSigned())
        throw Form::FormNotSigned();
    std::cout << "ddddzzzllllllzzdddddddddzlllllll" << std::endl;
    if((rand() % 100 + 1) < 50)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else 
        std::cout << "it’s a failure" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    return ;
}