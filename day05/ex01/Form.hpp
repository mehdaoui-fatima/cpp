/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:07:28 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/23 17:53:52 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__HPP
#define __FORM__HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private:
    	std::string const _name;
		bool _signed;
		const int  _gradeSign;
		const int  _gradeExecute;
	
	public:
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		Form(void);
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(Form const &form);
		Form& operator=(Form const &form);
		std::string getName(void) const;
		bool getSigned(void) const ;
		int getGradeSign(void) const;
		int getGradeExecute(void) const;
		void beSigned(Bureaucrat &b);
		~Form(void);
};
std::ostream & operator<<(std::ostream &o,  Form const &form);

#endif