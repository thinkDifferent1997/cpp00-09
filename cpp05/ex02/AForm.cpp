/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 00:25:47 by elsikira          #+#    #+#             */
/*   Updated: 2026/03/02 01:44:13 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): m_name("Default"), m_isSigned(false), m_gradeToSign(150), m_gradeToExecute(150){}
AForm::AForm(const AForm& other): m_name(other.m_name), m_isSigned(other.m_isSigned), m_gradeToExecute(other.m_gradeToExecute), m_gradeToSign(other.m_gradeToSign){}

AForm &AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        this->m_isSigned = other.m_isSigned;
    }
    return *this;
}
AForm::AForm(const std::string& name, int signGrade, int execGrade): m_name(name),m_isSigned(false), m_gradeToSign(signGrade), m_gradeToExecute(execGrade)
{
    if (m_gradeToSign < 1 || m_gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (m_gradeToSign > 150 || m_gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

void    AForm::beSigned(const Bureaucrat& other)
{
    if (other.getGrade() > m_gradeToSign)
        throw AForm::GradeTooLowException();
    m_isSigned = true;
}

AForm::~AForm(){}

std::string AForm::getName()const
{
    return (m_name);
}

bool   AForm::getIsSigned()const
{
    return (m_isSigned);    
}

int     AForm::getGradeToSign()const
{
    return(m_gradeToSign);
}

int     AForm::getGradeToExecute()const
{
    return (m_gradeToExecute);
}


std::ostream    &operator<<(std::ostream &out, const AForm& f)
{
    out << "AForm "<< f.getName() << "(" << (f.getIsSigned() ? "Signed" : "Unsigned")
    << ", Sign Grade: "<< f.getGradeToSign() << ", Execute Grade: "<< f.getGradeToExecute(); 
    return out;
}

void    AForm::execute(Bureaucrat const &executor)const
{
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
   this->performAction();
}