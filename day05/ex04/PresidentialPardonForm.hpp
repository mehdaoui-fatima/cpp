/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:37:01 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/25 14:30:19 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM__
#define __PRESIDENTIALPARDONFORM__
#include "Form.hpp"

class PresidentialPardonForm : public Form {

    private:
        std::string _target;

    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &r);
        PresidentialPardonForm& operator=(PresidentialPardonForm const &r);
        void execute(Bureaucrat const & executor) const;
        ~PresidentialPardonForm(void);
};

#endif