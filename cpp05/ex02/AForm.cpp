/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 00:25:47 by elsikira          #+#    #+#             */
/*   Updated: 2026/03/02 01:44:13 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): m_name("Default"), m_isSigned(false), m_gradeToSign(150), m_gradeToExecute(150){}
Form::Form(const Form& other): m_name(other.m_name), m_isSigned(other.m_isSigned), m_gradeToExecute(other.m_gradeToExecute), m_gradeToSign(other.m_gradeToSign){}

Form &Form::operator=(const Form& other)
{
    if (this != &other)
    {
        this->m_isSigned = other.m_isSigned;
    }
    return *this;
}
Form::Form(const std::string& name, int signGrade, int execGrade): m_name(name),m_isSigned(false), m_gradeToSign(signGrade), m_gradeToExecute(execGrade)
{
    if (m_gradeToSign < 1 || m_gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (m_gradeToSign > 150 || m_gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

void    Form::beSigned(const Bureaucrat& other)
{
    if (other.getGrade() > m_gradeToSign)
        throw Form::GradeTooLowException();
    m_isSigned = true;
}

std::string Form::getName()const
{
    return (m_name);
}

bool   Form::getIsSigned()const
{
    return (m_isSigned);    
}

int     Form::getGradeToSign()const
{
    return(m_gradeToSign);
}

int     Form::getGradeToExecute()const
{
    return (m_gradeToExecute);
}


std::ostream    &operator<<(std::ostream &out, const Form& f)
{
    out << "Form "<< f.getName() << "(" << (f.getIsSigned() ? "Signed" : "Unsigned")
    << ", Sign Grade: "<< f.getGradeToSign() << ", Execute Grade: "<< f.getGradeToExecute(); 
    return out;
}