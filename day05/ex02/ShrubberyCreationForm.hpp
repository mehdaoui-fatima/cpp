/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:37:10 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/25 14:30:26 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFOR__HPP
#define __SHRUBBERYCREATIONFOR__HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

    private:
        std::string _target;

    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &r);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const &r);
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm(void);
};

#endif