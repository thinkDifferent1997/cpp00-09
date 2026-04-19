/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:25:07 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/19 23:27:06 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): m_name("Default"), m_grade(150){}

Bureaucrat::Bureaucrat(const Bureaucrat& other): m_name(other.m_name), m_grade(other.m_grade){}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
    {
        this->m_grade = other.m_grade;
    }
    return *this;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): m_name(name), m_grade(grade)
{
    if (m_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (m_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){}

int Bureaucrat::getGrade()const
{
    return (m_grade);
}

std::string Bureaucrat::getName()const
{
    return (m_name);
}

void    Bureaucrat::incrementGrade()
{
    if(m_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    m_grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (m_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    m_grade++;
}

void    Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << m_name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << m_name << " could not sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

void    Bureaucrat::executeForm(AForm const& form) const
{
    try
    {
        {
            form.execute(*this);
            std::cout << m_name << " executed " << form.getName() << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << m_name << " could not execute " << form.getName() << " because " << e.what() << std::endl;
    }
    
}


std::ostream    &operator<<(std::ostream &out, const Bureaucrat& other)
{
    out << other.getName() << ", bureaucrat grade "<< other.getGrade() << "."; 
    return out;
}