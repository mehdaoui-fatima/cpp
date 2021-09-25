/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:19:38 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/25 16:36:32 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__HPP
#define __BUREAUCRAT__HPP
#include <string>
#include <iostream>
#include <exception>
#include <fstream> 
#include "Form.hpp"

class Form;
class Bureaucrat{
    
    private:
        std::string const _name;
        int _grade;
        
    public:
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };
        class GradeTooLowException :public std::exception {
            virtual const char* what() const throw();
        };
        Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &b);
        Bureaucrat& operator=(Bureaucrat const &b);
        std::string getName(void) const;
        int	getGrade(void) const;
		void increment(void);
		void decrement(void);
        void signForm(Form &form);
        void executeForm(Form const & form);
        ~Bureaucrat(void);
};
std::ostream & operator<<(std::ostream & o, Bureaucrat const &rhs);

#endif