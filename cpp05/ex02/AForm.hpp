/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
    private:
        const   std::string m_name;
        bool                m_isSigned;
        const int           m_gradeToSign;
        const int           m_gradeToExecute;

	protected:
		virtual void	performAction()const = 0;

    public:
        AForm();
        AForm(const AForm& other);
		AForm &operator=(const AForm& other);
		AForm(const std::string& name, int signGrade, int execGrade);
        ~AForm();

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

		class	FormNotSignedException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form is not signed !");
				}
		};

        std::string	getName() const;
        bool    getIsSigned()const;
        int     getGradeToSign()const;
        int     getGradeToExecute()const;
        void	beSigned(const Bureaucrat& other);
		void	execute(Bureaucrat const &executor)const;

};

std::ostream	&operator<<(std::ostream &out, const AForm &other);
