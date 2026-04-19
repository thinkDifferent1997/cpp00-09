/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 22:51:26 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/19 22:51:35 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>
#include <fstream>

#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
    private:
        const std::string m_target;
         void            performAction()const;


    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm& other);
        virtual ~RobotomyRequestForm();
};
