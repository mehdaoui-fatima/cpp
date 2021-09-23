/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:19:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/23 17:47:29 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):_name("undefined"), _grade(1)
{
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat created"<< std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &b){
	*this = b;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &b){
	if (this != &b)
		this->_grade = b._grade;
	return (*this);	
}

std::string Bureaucrat::getName(void) const{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const{
	return this->_grade;
}

void Bureaucrat::increment(void){
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrement(void){
	if(this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
		std::cout << this->getName() << "signs" << form.getName();
	}
	catch (std::exception e)
	{
		std::cout << this->getName() << " cannot sign ";
		std::cout<< form.getName() << "because " << e.what();
	}
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const &rhs)
{
   o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
   return o;
}