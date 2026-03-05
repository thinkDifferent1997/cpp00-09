/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:25:14 by elsikira          #+#    #+#             */
/*   Updated: 2026/03/02 01:42:27 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <iostream>
#include <ostream>

class   Bureaucrat
{
	private:
		const std::string   m_name;
		int                 m_grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat &operator=(const Bureaucrat& other);
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();

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
		int			getGrade()const;

		void	incrementGrade();
		void	decrementGrade();
		void        signForm(AForm& form);



};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &other);
