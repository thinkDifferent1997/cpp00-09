/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 22:49:22 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/19 23:09:11 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), m_target("default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm", 72, 45), m_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other), m_target(other.m_target){}


RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        this->AForm::operator=(other);
    }
    return *this;
}

void    RobotomyRequestForm::performAction() const
{
    std::cout << "DRILLING NOISES : RATATA... BIIIIIIIIIZ!" << std::endl;

    if (std::rand() % 2 == 0)
        std::cout << m_target << " has been successfully robotomized!" << std::endl;
    else
        std::cout << "The robotomy on " << m_target << " miserably failed!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){}