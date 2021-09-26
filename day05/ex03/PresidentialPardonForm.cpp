/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:36:56 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/26 15:59:39 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
Form("PresidentialPardonForm", 25, 5)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
Form("PresidentialPardonForm", 25, 5)
{
    this->_target = target;   
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &r) :
Form(r.getName(), r.getGradeSign(), getGradeExecute())
{
    *this = r;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &r)
{
    if (this != &r)
        this->_target =  r._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
        throw Bureaucrat::GradeTooLowException();
    if (!this->getSigned())
        throw Form::FormNotSigned();
    std::cout << _target << " has been pardoned by Zafod Beeblebrox " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}