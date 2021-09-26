/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:37:08 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/26 16:00:05 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(void) :
Form("ShrubberyCreationForm", 145, 137)
{
    this->_target = "default";
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;   
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &r) :
Form(r.getName(), r.getGradeSign(), getGradeExecute())
{
    *this = r;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &r)
{
    if (this != &r)
        this->_target =  r._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
        throw Bureaucrat::GradeTooLowException();
    if (!this->getSigned())
        throw Form::FormNotSigned();
    std::ofstream ofs(_target + "_shrubbery");
    	ofs << "\n";
	ofs << "               ,@@@@@@@,\n";
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	ofs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
	ofs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
	ofs << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	ofs << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
	ofs << "       |o|        | |         | |\n";
	ofs << "       |.|        | |         | |\n";
	ofs << "     \\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    return ;
}



