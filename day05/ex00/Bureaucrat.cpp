/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:19:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/24 16:16:06 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low");
}

Bureaucrat::Bureaucrat(void): _name("default"), _grade(1)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{

	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &b): _name(b._name), _grade(b._grade)
{
	*this = b;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &b)
{
	if (this != &b)
		this->_grade = b._grade;
	return (*this);	
}

void Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::increment(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrement(void)
{
	if(this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const &rhs)
{
   o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
   return o;
}