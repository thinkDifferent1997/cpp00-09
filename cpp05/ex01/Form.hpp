/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 00:25:52 by elsikira          #+#    #+#             */
/*   Updated: 2026/03/02 01:42:36 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>

class Bureaucrat;

class Form
{
    private:
        const   std::string m_name;
        bool                m_isSigned;
        const int           m_gradeToSign;
        const int           m_gradeToExecute;

    public:
        Form();
        Form(const Form& other);
		Form &operator=(const Form& other);
		Form(const std::string& name, int signGrade, int execGrade);
        ~Form();

        class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too High !");
				}
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too Low !");
				}
		};

        std::string	getName() const;
        bool    getIsSigned()const;
        int     getGradeToSign()const;
        int     getGradeToExecute()const;
        void        beSigned(const Bureaucrat& other);

};

std::ostream	&operator<<(std::ostream &out, const Form &other);
