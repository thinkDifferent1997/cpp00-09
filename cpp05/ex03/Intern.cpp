/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:59:15 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/21 22:41:44 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

AForm* Intern::createShrubbery(const std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createPresidential(const std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::createRobotomy(const std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::makeForm(const std::string formName, const std::string formTarget)
{
    std::string names[] =
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (Intern::*creators[])(const std::string)=
    {
        &Intern::createShrubbery,
        &Intern::createRobotomy,
        &Intern::createPresidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*creators[i])(formTarget);
        }
    }
    std::cout << "Error: Intern does not know how to create " << formName << std::endl;
    return NULL;
}