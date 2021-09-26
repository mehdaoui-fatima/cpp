/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:07:30 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/26 14:35:51 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form grade too low");
}

Form::Form(void) : _name("default"), _gradeSign(1), _gradeExecute(1), _signed(false)
{
	return ;
}

Form::Form(std::string name, int gradSign, int gradExecute) :
_name(name), _gradeSign(gradSign), _gradeExecute(gradExecute), _signed(false)
{
	if (this->_gradeExecute < 1 || this->_gradeSign < 1)
		throw GradeTooHighException();
	else if (this->_gradeExecute > 150 || this->_gradeSign > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &form):
 _name(form._name), _gradeSign(form._gradeSign), 
 _gradeExecute(form._gradeExecute), _signed(form._signed)
{
	*this = form;
}

Form& Form::operator=(Form const &form)
{
	if (this != &form)
		this->_signed = form._signed;
	return (*this);
}

std::string Form::getName(void) const
{
    return this->_name;
}

bool Form::getSigned(void) const
{
    return this->_signed;   
}

int Form::getGradeSign(void) const
{
   return this->_gradeSign;
}

int Form::getGradeExecute(void) const
{
   return  this->_gradeExecute;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > _gradeSign) 
		throw GradeTooLowException();
	this->_signed = true;
}

Form::~Form(void)
{
	return;
}

std::ostream & operator<<(std::ostream &o,  Form const &f){

	o << f.getName() << " requires " << f.getGradeSign() << " to be signed and ";
	o << f.getGradeExecute() << " grade to execute it. ";
	if(f.getSigned())
		o << "the form is signed";
	else
		o << "the form is not signed yet";
	return o;
}