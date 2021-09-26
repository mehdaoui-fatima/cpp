/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:37:05 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/25 14:30:24 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __REBOTMYREQUESTFORM__HPP
#define __REBOTMYREQUESTFORM__HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {

    private:
        std::string _target;

    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &r);
        RobotomyRequestForm& operator=(RobotomyRequestForm const &r);
        void execute(Bureaucrat const & executor) const;
        ~RobotomyRequestForm(void);
};

#endif