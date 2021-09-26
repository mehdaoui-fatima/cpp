/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:39:16 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/26 16:04:52 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){
    return;
}

Intern::Intern(Intern const &intern){
    
    *this = intern;
    return ;
}

Intern& Intern::operator=(Intern const &intern)
{
    (Intern const)intern;
    return (*this);
}

Form* shrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form* robotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form* pardon(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string name, std::string formTraget)
{
    std::string formName[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    f FormToMake[] = {robotomy, pardon, shrubbery};

    for (int i=0; i<3; i++)
    {
        if (name.compare(formName[i]) == 0)
        {
            std::cout << "Intern creates " << formName[i] << std::endl;
            return FormToMake[i](formTraget);
        }
    }
    std::cout << name << " unknown form type" << std::endl;
    return nullptr;
}

Intern::~Intern(void)
{
    return ;
}
