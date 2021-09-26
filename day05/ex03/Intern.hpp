/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:24:00 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/26 11:08:36 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN__HPP__
#define __INTERN__HPP__
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

    public:
        Intern(void);
        Intern(Intern const &intern);
        Intern& operator=(Intern const &intern);
        Form* makeForm(std::string formName, std::string formTraget);
        ~Intern(void);
};

typedef Form* (*f)(std::string);

#endif